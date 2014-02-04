/*
 * julia_v4_1.c
 *
 * Code generation for function 'julia_v4_1'
 *
 * C source code generated on: Tue Feb  4 00:21:00 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_1.h"
#include "abs.h"
#include "mpower.h"
#include "julia_v4_1_emxutil.h"
#include "julia_v4_1_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 1, 22, "julia_v4_1",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_1.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 9, 11, "iter", "julia_v4_1",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_1.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 10, 16, "vz", "julia_v4_1",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_1.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 13, 13, "vz", "julia_v4_1",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_1.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 13, 19, "vz", "julia_v4_1",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_1.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 14, 13, "iter", "julia_v4_1",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_1.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 14, 21, "iter", "julia_v4_1",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_1.m",
  0 };

/* Function Definitions */
void julia_v4_1(const emlrtStack *sp, emxArray_creal_T *vz, const creal_T c,
                real_T maxiter, emxArray_real_T *iter)
{
  int32_T i1;
  int32_T unnamed_idx_1;
  int32_T exitg1;
  int32_T i2;
  creal_T b_vz;
  real_T d0;
  creal_T c_vz;
  creal_T dc0;
  int32_T i3;

  /*  assert(isa(vz,'double')); */
  /*  assert(isa(c,'double')); */
  /*  assert(isa(maxiter, 'double')); */
  i1 = iter->size[0] * iter->size[1];
  iter->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)iter, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  unnamed_idx_1 = vz->size[1];
  i1 = iter->size[0] * iter->size[1];
  iter->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)iter, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  unnamed_idx_1 = vz->size[1];
  for (i1 = 0; i1 < unnamed_idx_1; i1++) {
    iter->data[i1] = 1.0;
  }

  /* define array of iterations */
  i1 = vz->size[1];
  unnamed_idx_1 = 1;
  while (unnamed_idx_1 - 1 <= i1 - 1) {
    /* over each element of the array do the julia iterations */
    do {
      exitg1 = 0;
      i2 = iter->size[1];
      if (iter->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i2,
           &emlrtBCI, sp) - 1] < maxiter) {
        i2 = vz->size[1];
        b_vz.re = vz->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
          i2, &b_emlrtBCI, sp) - 1].re;
        i2 = vz->size[1];
        b_vz.im = vz->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
          i2, &b_emlrtBCI, sp) - 1].im;
        d0 = b_abs(b_vz);
        if (d0 > 1.0) {
          exitg1 = 1;
        } else {
          i2 = vz->size[1];
          c_vz.re = vz->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
            i2, &d_emlrtBCI, sp) - 1].re;
          i2 = vz->size[1];
          c_vz.im = vz->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1,
            i2, &d_emlrtBCI, sp) - 1].im;
          dc0 = mpower(c_vz);
          i2 = vz->size[1];
          vz->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i2,
            &c_emlrtBCI, sp) - 1].re = dc0.re + c.re;
          i2 = vz->size[1];
          vz->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i2,
            &c_emlrtBCI, sp) - 1].im = dc0.im + c.im;
          i2 = iter->size[1];
          i3 = iter->size[1];
          iter->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1, 1, i2,
            &e_emlrtBCI, sp) - 1] = iter->data[emlrtDynamicBoundsCheckFastR2012b
            (unnamed_idx_1, 1, i3, &f_emlrtBCI, sp) - 1] + 1.0;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    unnamed_idx_1++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

/* End of code generation (julia_v4_1.c) */
