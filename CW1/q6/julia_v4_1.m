function [iter,vz] = julia_v4_1(vz, c, maxiter)%#codegen
iter=ones(1,length(vz)); %define array of iterations

while max(iter) < maxiter
        mask = abs(vz) <= 1;
        if ~any(mask)
            break;
        end
        vz(mask)=vz(mask).^2 + c;
        iter = iter + +mask;
        
end

end
