/*
 * julia_v4_3_initialize.c
 *
 * Code generation for function 'julia_v4_3_initialize'
 *
 * C source code generated on: Tue Feb  4 00:26:36 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_3.h"
#include "julia_v4_3_initialize.h"
#include "julia_v4_3_data.h"

/* Function Definitions */
void julia_v4_3_initialize(emlrtStack *sp, emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(sp, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(sp);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (julia_v4_3_initialize.c) */
