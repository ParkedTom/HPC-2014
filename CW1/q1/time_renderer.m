function [t,n,w,h,c,maxiter] = time_renderer(renderer,w,h,c,maxiter)
    
    % set up defaults
    if nargin < 2
        w=round(2.^(4:0.5:10));
    end
    if nargin < 3
        h=w;
    end
    if nargin < 4
        c=sqrt(2);
    end
    if nargin < 5
        maxiter=64;
    end
    
        %w_s = zeros(1,max(size(w,2),max(size(h,2),max(size(c,2),max(size(maxiter,2),size(renderer,2))))));
        %h_s = zeros(1,max(size(w,2),max(size(h,2),max(size(c,2),max(size(maxiter,2),size(renderer,2))))));
        %c_s = zeros(1,max(size(w,2),max(size(h,2),max(size(c,2),max(size(maxiter,2),size(renderer,2))))));
        %maxiter_s = zeros(1,max(size(w,2),max(size(h,2),max(size(c,2),max(size(maxiter,2),size(renderer,2))))));
        %renderer_s = cell(1,max(size(w,2),max(size(h,2),max(size(c,2),max(size(maxiter,2),size(renderer,2))))));
        
    for i = 1:max(size(w,2),max(size(h,2),max(size(c,2),max(size(maxiter,2),size(renderer,2)))))
        if i > size(w,2)
            w_s(i).f1 = w(size(w,2));
            w(i) = w(size(w,2));
        else
            w_s(i).f1 = w(i);
        end
            
        if i > size(h,2)
            h_s(i).f1 = h(size(h,2));
             h(i) = h(size(h,2));
        else
            h_s(i).f1 = h(i);
        end
        if i > size(c,2)
            c_s(i).f1 = c(size(c,2));
             c(i) = w(size(c,2));
        else
            c_s(i).f1 = c(i);
        end
        if i > size(maxiter,2)
            maxiter_s(i).f1 = maxiter(size(maxiter,2));
             maxiter(i) = maxiter(size(maxiter,2));
        else
            maxiter_s(i).f1 = maxiter(i);
        end
        if i > size(renderer,2)
            renderer_s(i).f1 = renderer{size(renderer,2)};
        else
            renderer_s(i).f1 = renderer{i};
        end
    end
        
    
    
    t_temp = arrayfun(@(a,b,c,d,e) scalar_timer(a.f1,b.f1,c.f1,d.f1,e.f1),renderer_s,w_s,h_s,c_s,maxiter_s,'UniformOutput',0);
    n = w.*h;
    t = size(t_temp,2);
    for i = 1:size(t_temp,2)
        t(i) = t_temp{i};
    end
    
end

    