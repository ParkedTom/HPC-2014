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
    
    for w_iterator = w
        for c_iterator = c
            for max_iterator = maxiter
                n_temp = w(w_iterator)*h(w_iterator);
                tic;
                renderer(w(w_iterator),h(w_iterator),c(c_iterator),maxiter(max_iterator));
                t_temp = toc;
                if w_iterator == c_iterator == max_iterator == 1
                    n = n_temp;
                    t = t_temp;
                else
                    n = [n,n_temp];
                    t = [t,t_temp];
                end
            end
        end
    end
end

    