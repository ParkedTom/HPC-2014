function [iter,vz] = julia_v4_3(vz, c, maxiter)%#codegen
% assert(isa(vz,'double'));
% assert(isa(c,'double'));
% assert(isa(maxiter, 'double'));

iter=ones(1,length(vz)); %define array of iterations

for i = 1:length(vz) %over each element of the array do the julia iterations
    while iter(i)<maxiter
        if abs(vz(i)) > 1
            break;
        end
            vz(i)=vz(i)^2 + c; 
            iter(i)=iter(i)+1;
    end
    
       
end

end
