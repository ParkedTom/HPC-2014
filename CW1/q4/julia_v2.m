function [iter,vz] = julia_v2(vz, c, maxiter)

iter=ones(1,length(vz)); %define array of iterations

while max(iter) < maxiter
        mask = abs(vz) <= 1;
        if ~any(mask)
            break;
        end
        vz_temp=vz.^2 + c;
        vz = +mask.*vz_temp + +(~mask).*vz;
        iter = iter + +mask;
        
end
    
       


end
