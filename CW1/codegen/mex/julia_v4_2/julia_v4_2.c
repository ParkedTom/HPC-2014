/*
 * julia_v4_2.c
 *
 * Code generation for function 'julia_v4_2'
 *
 * C source code generated on: Tue Feb  4 00:24:22 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_2.h"
#include "julia_v4_2_emxutil.h"
#include "julia_v4_2_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 6, "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m"
};

static emlrtRSInfo b_emlrtRSI = { 8, "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m"
};

static emlrtRSInfo c_emlrtRSI = { 10, "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m"
};

static emlrtRSInfo d_emlrtRSI = { 13, "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 22, "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 10, 16, "vz", "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 13, 19, "vz", "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 9, 11, "iter", "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 13, 13, "vz", "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 14, 13, "iter", "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 14, 21, "iter", "julia_v4_2",
  "/Users/Tom/Documents/EE4/High Performance Computing for Engineers/HPC-2014/CW1/q6/julia_v4_2.m",
  0 };

/* Function Definitions */
void julia_v4_2(const emlrtStack *sp, emxArray_creal_T *vz, const creal_T c,
                real_T maxiter, emxArray_real_T *iter)
{
  int32_T i1;
  int32_T unnamed_idx_1;
  int32_T exitg1;
  int32_T i2;
  int32_T i3;
  real_T vz_re;
  real_T vz_im;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  assert(isa(vz,'double')); */
  /*  assert(isa(c,'double')); */
  /*  assert(isa(maxiter, 'double')); */
  st.site = &emlrtRSI;
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
  st.site = &b_emlrtRSI;
  i1 = vz->size[1];
  unnamed_idx_1 = 0;
  while (unnamed_idx_1 <= i1 - 1) {
    /* over each element of the array do the julia iterations */
    do {
      exitg1 = 0;
      i2 = iter->size[1];
      if (iter->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1 + 1, 1, i2,
           &c_emlrtBCI, sp) - 1] < maxiter) {
        st.site = &c_emlrtRSI;
        i2 = vz->size[1];
        i3 = unnamed_idx_1 + 1;
        emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &emlrtBCI, &st);
        if (muDoubleScalarHypot(vz->data[unnamed_idx_1].re, vz->
                                data[unnamed_idx_1].im) > 1.0) {
          exitg1 = 1;
        } else {
          st.site = &d_emlrtRSI;
          i2 = vz->size[1];
          i3 = unnamed_idx_1 + 1;
          emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &b_emlrtBCI, &st);
          vz_re = vz->data[unnamed_idx_1].re * vz->data[unnamed_idx_1].re -
            vz->data[unnamed_idx_1].im * vz->data[unnamed_idx_1].im;
          vz_im = vz->data[unnamed_idx_1].re * vz->data[unnamed_idx_1].im +
            vz->data[unnamed_idx_1].im * vz->data[unnamed_idx_1].re;
          i2 = vz->size[1];
          vz->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1 + 1, 1, i2,
            &d_emlrtBCI, sp) - 1].re = vz_re + c.re;
          i2 = vz->size[1];
          vz->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1 + 1, 1, i2,
            &d_emlrtBCI, sp) - 1].im = vz_im + c.im;
          i2 = iter->size[1];
          i3 = iter->size[1];
          iter->data[emlrtDynamicBoundsCheckFastR2012b(unnamed_idx_1 + 1, 1, i2,
            &e_emlrtBCI, sp) - 1] = iter->data[emlrtDynamicBoundsCheckFastR2012b
            (unnamed_idx_1 + 1, 1, i3, &f_emlrtBCI, sp) - 1] + 1.0;
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

/* End of code generation (julia_v4_2.c) */
