/*
 * julia_v4_initialize.c
 *
 * Code generation for function 'julia_v4_initialize'
 *
 * C source code generated on: Tue Feb 04 20:09:16 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4.h"
#include "julia_v4_initialize.h"
#include "julia_v4_data.h"

/* Function Definitions */
void julia_v4_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (julia_v4_initialize.c) */
