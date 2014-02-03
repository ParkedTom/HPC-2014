function [ t ] = scalar_timer( renderer,w,h,c,maxiter )
%Single scaler timing of renderer

tic;
renderer(w,h,c,maxiter);
t = toc;


end

