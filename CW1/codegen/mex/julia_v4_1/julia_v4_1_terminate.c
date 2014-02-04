/*
 * julia_v4_1_terminate.c
 *
 * Code generation for function 'julia_v4_1_terminate'
 *
 * C source code generated on: Tue Feb  4 00:21:00 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_1.h"
#include "julia_v4_1_terminate.h"

/* Function Definitions */
void julia_v4_1_atexit(emlrtStack *sp)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(sp);
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void julia_v4_1_terminate(emlrtStack *sp)
{
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (julia_v4_1_terminate.c) */
