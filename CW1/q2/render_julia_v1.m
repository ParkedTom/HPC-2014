function [pixels]=render_julia_v1(w,h,c, maxiter)

if nargin < 3
    c = 0.5+0.5i;
end
if nargin < 4
    maxiter=16;
end

pixels=zeros(h,w);

i=sqrt(-1); % Not really necessary, defined by default

ox=-1;
dx=2/w;
oy=-1;
dy=2/h;

for x=1:w
        z(1:h) = (ox+x*dx) + (oy+(1:h).*dy).*i;
        pixels(1:h,x) = julia_v1(z, c, maxiter);
end
