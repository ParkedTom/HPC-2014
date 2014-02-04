function [pixels]=render_julia_v2(juliaproc,w,h,c, maxiter)
% render_julia_v2 : Renders julia set using a specified iteration ...
% procedure
% juliaproc : A function of the form [viter,vz] = juliaproc(vz, ...
% c, maxiter)
% where vz can be a vector.
% w,h,c,maxiter : Standard rendering controls

if nargin < 4
    c = 0.5+0.5i;
end
if nargin < 5
    maxiter=16;
end

pixels=zeros(h,w);

i=sqrt(-1); % Not really necessary, defined by default

ox=-1;
dx=2/w;
oy=-1;
dy=2/h;

for x=1:w
        vz(1:h) = (ox+x*dx) + (oy+(1:h).*dy).*i;
        pixels(1:h,x) = juliaproc(vz, c, maxiter);
end
