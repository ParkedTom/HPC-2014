/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Tue Feb  4 00:21:00 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_1.h"
#include "power.h"

/* Function Definitions */
creal_T power(const creal_T a)
{
  creal_T y;
  y.re = a.re * a.re - a.im * a.im;
  y.im = a.re * a.im + a.im * a.re;
  return y;
}

/* End of code generation (power.c) */
