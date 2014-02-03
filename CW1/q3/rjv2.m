function [ f ] = rjv2( jp )
%Creates an anonymous function for render_julia_v2
f = @(w,h,c,maxiter) (render_julia_v2(jp,w,h,c,maxiter) );

end

