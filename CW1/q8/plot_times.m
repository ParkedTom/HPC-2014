%plot graphs
if matlabpool('size') ==0
    matlabpool;
end
compile_julia_v4;
compile_julia_v4_1;
[t,n] = time_renderer(@render_julia);% original
[t_v1,n] = time_renderer(@render_julia_v1); %vector input 
[t_v2,n] = time_renderer(rjv2(@julia_v2)); %'fully' vectorised
[t_v3,n] = time_renderer(rjv2(@julia_v3)); %dynamic vector
[t_v4,n] = time_renderer(rjv2(@julia_v4_mex)); %compiled juliaproc
[t_v4_1,n] = time_renderer(rjv2(@julia_v4_1_mex)); %compiled juliaproc with vectorised code
[t_v4_1p,n] = time_renderer(rjv3(@julia_v4_1_mex)); %parfor loop render w/compiled juliaproc with vectorised code

s_v1 = t./t_v1;
s_v2 = t./t_v2;
s_v3 = t./t_v3;
s_v4 = t./t_v4;
s_v4_1 = t./t_v4_1;
s_v4_1p = t./t_v4_1p;

semilogx(n,s_v1,n,s_v2,n,s_v3,n,s_v4,n,s_v4_1,n,s_v4_1p);
legend('Vector Input','Full Vector','Dynamic Vectors', 'Compiled Juliaproc', 'Compiled Vectorised', 'Parallelised and Compiled Vectorised Code');
xlabel('Frame size (Number of Pixels)');
ylabel('Render time speed up');
title('Comparison of speed up over orignal fully scalar Frame rendering for a variety of rendering methods');
print('-dpdf', 'Speed up variation for varying frame sizes');
t_pool = cell(1,4);
for k = 1:4
    if matlabpool('size') > 0
        matlabpool('close');
    end
    matlabpool(k);
    [t,n] = time_renderer(rjv3(@julia_v4_1_mex));
    t_pool{k} = t;
end
loglog(n,t_pool{1},n,t_pool{2},n,t_pool{3},n,t_pool{4});
xlabel('Frame size (Number of Pixels)');
ylabel('Render time (s)');
title('Comparison of number of workers, 1,2,3,4');
legend('1 worker','2 workers','3 workers','4 workers');
print('-dpdf', 'Comparing number of workers');

cr = -1:0.1:1;
ci = -1:0.1:1;
i = sqrt(-1);
t_store = zeros(length(cr),length(ci));
for r = 1:length(cr)
for im = 1:length(ci)
[t,n,w,h,c] = time_renderer(rjv2(@julia_v4_1_mex),128,128,(cr(r) + ci(im)*i),64);
t_store(r,im) = t;
end
end

contourf(ci,cr,t_store);
xlabel('Imaginary Axes');
ylabel('Real Axes');
z = colorbar;
ylabel(z,'Rendering Time (s)');
title('Timing comparison for various values of C in a 128x128 frame with a maximum of 64 iterations using non-parallelised compiled code');
print('-dpdf', 'Timing variance with C');



[t_ar,n_ar] = time_renderer(@render_julia,2^4,round(2.^(4:0.5:12)));% original
[t_v2_ar,n_ar] = time_renderer(rjv2(@julia_v2),2^4,round(2.^(4:0.5:12))); %'fully' vectorised
[t_v4_1_ar,n_ar] = time_renderer(rjv2(@julia_v4_1_mex),2^4,round(2.^(4:0.5:12))); %compiled juliaproc with vectorised code
[t_v4_1p_ar,n_ar] = time_renderer(rjv3(@julia_v4_1_mex),2^4,round(2.^(4:0.5:12))); %parfor loop render w/compiled juliaproc with vectorised code
%[t,n] = time_renderer(@render_julia);% original
loglog(n,t,n_ar,t_ar,n,t_v2,n_ar,t_v2_ar,n,t_v4_1,n_ar,t_v4_1_ar,n,t_v4_1p,n_ar,t_v4_1p_ar);
legend('Scalar Square','Scalar Rectangle', 'Full Vector Square', 'Full Vector Rectangle', 'Compiled Vector Square','Compiled Vector Rectangle', 'Parallel Compiled Vector Square', 'Parallel Compiled Vector Rectangle');
xlabel('Frame Size');
xmin = 2^4;
xmax = 2^20;
xlim([xmin xmax]);
ylabel('Render Time');
title('Comparison of square frames vs rectangluar frames increasing vector size, w = 2^4');
print('-dpdf', 'Comparing aspect ratio');