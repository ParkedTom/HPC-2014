/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Tue Feb  4 00:26:36 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_3.h"
#include "abs.h"

/* Function Declarations */
static real_T eml_dlapy2(real_T x1, real_T x2);
static real_T eml_scalar_abs(const creal_T x);

/* Function Definitions */
static real_T eml_dlapy2(real_T x1, real_T x2)
{
  return muDoubleScalarHypot(x1, x2);
}

static real_T eml_scalar_abs(const creal_T x)
{
  return eml_dlapy2(x.re, x.im);
}

real_T b_abs(const creal_T x)
{
  return eml_scalar_abs(x);
}

/* End of code generation (abs.c) */
