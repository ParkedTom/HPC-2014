cfg = coder.config('mex');
cfg.GenerateReport = true;
vz = coder.typeof(complex(0),[1,inf]);
c = coder.typeof(complex(0));
maxiter = coder.typeof(0);



codegen julia_v4_2 -config cfg -args {vz, c, maxiter} -O disable:openmp