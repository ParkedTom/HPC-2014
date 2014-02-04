/*
 * julia_v4_3_terminate.c
 *
 * Code generation for function 'julia_v4_3_terminate'
 *
 * C source code generated on: Tue Feb  4 00:26:36 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_3.h"
#include "julia_v4_3_terminate.h"

/* Function Definitions */
void julia_v4_3_atexit(emlrtStack *sp)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(sp);
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void julia_v4_3_terminate(emlrtStack *sp)
{
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (julia_v4_3_terminate.c) */
