/*
 * julia_v4_2_mex.c
 *
 * Code generation for function 'julia_v4_2'
 *
 * C source code generated on: Tue Feb  4 00:24:22 2014
 *
 */

/* Include files */
#include "mex.h"
#include "julia_v4_2_api.h"
#include "julia_v4_2_initialize.h"
#include "julia_v4_2_terminate.h"

/* Function Declarations */
static void julia_v4_2_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "julia_v4_2", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void julia_v4_2_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *outputs[2];
  mxArray *inputs[3];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  /* Module initialization. */
  julia_v4_2_initialize(&stack, &emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 3, mxCHAR_CLASS, 10, "julia_v4_2");
  } else if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 10, "julia_v4_2");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  julia_v4_2_api(&stack, (const mxArray**)inputs, (const mxArray**)outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  julia_v4_2_terminate(&stack);
}

void julia_v4_2_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   julia_v4_2_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(julia_v4_2_atexit_wrapper);
  /* Dispatch the entry-point. */
  julia_v4_2_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (julia_v4_2_mex.c) */
