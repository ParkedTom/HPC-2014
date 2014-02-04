/*
 * julia_v4.h
 *
 * Code generation for function 'julia_v4'
 *
 * C source code generated on: Tue Feb  4 00:09:06 2014
 *
 */

#ifndef __JULIA_V4_H__
#define __JULIA_V4_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "julia_v4_types.h"

/* Function Declarations */
extern void julia_v4(const emlrtStack *sp, emxArray_creal_T *vz, const creal_T c, real_T maxiter, emxArray_real_T *iter);
#endif
/* End of code generation (julia_v4.h) */
