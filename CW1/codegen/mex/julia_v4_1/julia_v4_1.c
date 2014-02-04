/*
 * julia_v4_1.c
 *
 * Code generation for function 'julia_v4_1'
 *
 * C source code generated on: Tue Feb 04 20:09:25 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_1.h"
#include "julia_v4_1_emxutil.h"
#include "julia_v4_1_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4, "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m" };

static emlrtRSInfo b_emlrtRSI = { 6, "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m" };

static emlrtRSInfo c_emlrtRSI = { 9, "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m" };

static emlrtRSInfo d_emlrtRSI = { 16, "max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo e_emlrtRSI = { 18, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo f_emlrtRSI = { 38, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo g_emlrtRSI = { 73, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo h_emlrtRSI = { 88, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo i_emlrtRSI = { 219, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo j_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo k_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo l_emlrtRSI = { 12, "any",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/ops/any.m" };

static emlrtRSInfo m_emlrtRSI = { 24, "eml_all_or_any",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtRSInfo n_emlrtRSI = { 27, "eml_all_or_any",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtRSInfo o_emlrtRSI = { 109, "eml_all_or_any",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtRSInfo p_emlrtRSI = { 11, "eml_li_find",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo q_emlrtRSI = { 14, "eml_li_find",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo r_emlrtRSI = { 26, "eml_li_find",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo s_emlrtRSI = { 39, "eml_li_find",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo emlrtMCI = { 41, 9, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo b_emlrtMCI = { 38, 19, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo c_emlrtMCI = { 74, 9, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo d_emlrtMCI = { 73, 19, "eml_min_or_max",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo e_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo g_emlrtMCI = { 25, 9, "eml_all_or_any",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtMCInfo h_emlrtMCI = { 24, 19, "eml_all_or_any",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtMCInfo i_emlrtMCI = { 30, 9, "eml_all_or_any",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtMCInfo j_emlrtMCI = { 27, 19, "eml_all_or_any",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_all_or_any.m" };

static emlrtMCInfo k_emlrtMCI = { 14, 5, "eml_li_find",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 22, "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m" };

static emlrtRTEInfo b_emlrtRTEI = { 17, 9, "eml_li_find",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo d_emlrtRTEI = { 16, 5, "abs",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/elfun/abs.m" };

static emlrtRTEInfo e_emlrtRTEI = { 15, 9, "eml_scalexp_alloc",
  "C:/matlab/R2013a/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m" };

static emlrtRTEInfo f_emlrtRTEI = { 5, 9, "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m" };

static emlrtECInfo emlrtECI = { -1, 9, 9, "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m" };

static emlrtECInfo b_emlrtECI = { 2, 10, 16, "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 9, 9, "vz", "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 9, 18, "vz", "julia_v4_1",
  "H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4_1.m", 0 };

/* Function Declarations */
static const mxArray *b_message(const mxArray *b, const mxArray *c, emlrtMCInfo *
  location);
static void check_forloop_overflow_error(void);
static void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y);
static void error(const mxArray *b, emlrtMCInfo *location);
static const mxArray *message(const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_message(const mxArray *b, const mxArray *c, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[2];
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m6, 2, pArrays, "message",
    TRUE, location);
}

static void check_forloop_overflow_error(void)
{
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 34 };

  const mxArray *m0;
  char_T cv0[34];
  int32_T i;
  static const char_T cv1[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 23 };

  char_T cv2[23];
  static const char_T cv3[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m0 = mxCreateCharArray(2, iv0);
  for (i = 0; i < 34; i++) {
    cv0[i] = cv1[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m0, cv0);
  emlrtAssign(&y, m0);
  b_y = NULL;
  m0 = mxCreateCharArray(2, iv1);
  for (i = 0; i < 23; i++) {
    cv2[i] = cv3[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m0, cv2);
  emlrtAssign(&b_y, m0);
  error(b_message(y, b_y, &e_emlrtMCI), &f_emlrtMCI);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
}

static void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m1;
  int32_T j;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > x->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  if (k <= x->size[1]) {
  } else {
    emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m1 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m1);
    error(b_y, &k_emlrtMCI);
    emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  }

  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  j = 0;
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > x->size[1]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

static void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

static const mxArray *message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m5;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m5, 1, &pArray, "message",
    TRUE, location);
}

void julia_v4_1(emxArray_creal_T *vz, const creal_T c, real_T maxiter,
                emxArray_real_T *iter)
{
  int32_T i1;
  int32_T i;
  int32_T loop_ub;
  emxArray_boolean_T *mask;
  emxArray_int32_T *r1;
  emxArray_creal_T *r2;
  emxArray_real_T *y;
  emxArray_creal_T *a;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  int32_T exitg1;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv6[2] = { 1, 36 };

  const mxArray *m7;
  char_T cv4[36];
  static const char_T cv5[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv7[2] = { 1, 39 };

  char_T cv6[39];
  static const char_T cv7[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T mtmp;
  int32_T b_iter[2];
  boolean_T p;
  int32_T exitg3;
  const mxArray *d_y;
  static const int32_T iv8[2] = { 1, 41 };

  char_T cv8[41];
  static const char_T cv9[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *e_y;
  static const int32_T iv9[2] = { 1, 51 };

  char_T cv10[51];
  static const char_T cv11[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg2;
  int32_T i2;
  real_T a_im;
  real_T a_re;
  real_T b_a_im;
  int32_T b_mask[2];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  i1 = iter->size[0] * iter->size[1];
  iter->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)iter, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = vz->size[1];
  i1 = iter->size[0] * iter->size[1];
  iter->size[1] = i;
  emxEnsureCapacity((emxArray__common *)iter, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = vz->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    iter->data[i1] = 1.0;
  }

  /* define array of iterations */
  emxInit_boolean_T(&mask, 2, &f_emlrtRTEI, TRUE);
  emxInit_int32_T(&r1, 2, &emlrtRTEI, TRUE);
  emxInit_creal_T(&r2, 2, &emlrtRTEI, TRUE);
  emxInit_real_T(&y, 2, &emlrtRTEI, TRUE);
  emxInit_creal_T(&a, 2, &emlrtRTEI, TRUE);
  emxInit_int32_T(&r3, 2, &emlrtRTEI, TRUE);
  emxInit_int32_T(&r4, 2, &emlrtRTEI, TRUE);
  do {
    exitg1 = 0;
    emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    if ((iter->size[1] == 1) || (iter->size[1] != 1)) {
      overflow = TRUE;
    } else {
      overflow = FALSE;
    }

    if (overflow) {
    } else {
      emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
      b_y = NULL;
      m7 = mxCreateCharArray(2, iv6);
      for (i = 0; i < 36; i++) {
        cv4[i] = cv5[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m7, cv4);
      emlrtAssign(&b_y, m7);
      error(message(b_y, &emlrtMCI), &b_emlrtMCI);
      emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
    }

    if (iter->size[1] > 0) {
    } else {
      emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
      c_y = NULL;
      m7 = mxCreateCharArray(2, iv7);
      for (i = 0; i < 39; i++) {
        cv6[i] = cv7[i];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m7, cv6);
      emlrtAssign(&c_y, m7);
      error(message(c_y, &c_emlrtMCI), &d_emlrtMCI);
      emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    mtmp = iter->data[0];
    if ((iter->size[1] > 1) && (1 < iter->size[1])) {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      if (2 > iter->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (iter->size[1] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error();
        emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 1; i + 1 <= iter->size[1]; i++) {
        if (iter->data[i] > mtmp) {
          mtmp = iter->data[i];
        }
      }
    }

    emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
    if (mtmp < maxiter) {
      for (i1 = 0; i1 < 2; i1++) {
        b_iter[i1] = vz->size[i1];
      }

      i1 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = b_iter[1];
      emxEnsureCapacity((emxArray__common *)y, i1, (int32_T)sizeof(real_T),
                        &d_emlrtRTEI);
      for (i = 0; i < vz->size[1]; i++) {
        y->data[(int32_T)(1.0 + (real_T)i) - 1] = muDoubleScalarHypot(vz->data
          [(int32_T)(1.0 + (real_T)i) - 1].re, vz->data[(int32_T)(1.0 + (real_T)
          i) - 1].im);
      }

      i1 = mask->size[0] * mask->size[1];
      mask->size[0] = 1;
      mask->size[1] = y->size[1];
      emxEnsureCapacity((emxArray__common *)mask, i1, (int32_T)sizeof(boolean_T),
                        &emlrtRTEI);
      loop_ub = y->size[0] * y->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        mask->data[i1] = (y->data[i1] <= 1.0);
      }

      emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      overflow = FALSE;
      p = FALSE;
      i = 0;
      do {
        exitg3 = 0;
        if (i < 2) {
          if (mask->size[i] != 0) {
            exitg3 = 1;
          } else {
            i++;
          }
        } else {
          p = TRUE;
          exitg3 = 1;
        }
      } while (exitg3 == 0);

      if (!p) {
      } else {
        overflow = TRUE;
      }

      if (!overflow) {
      } else {
        emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
        d_y = NULL;
        m7 = mxCreateCharArray(2, iv8);
        for (i = 0; i < 41; i++) {
          cv8[i] = cv9[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 41, m7, cv8);
        emlrtAssign(&d_y, m7);
        error(message(d_y, &g_emlrtMCI), &h_emlrtMCI);
        emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
      }

      if ((mask->size[1] == 1) || (mask->size[1] != 1)) {
        overflow = TRUE;
      } else {
        overflow = FALSE;
      }

      if (overflow) {
      } else {
        emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
        e_y = NULL;
        m7 = mxCreateCharArray(2, iv9);
        for (i = 0; i < 51; i++) {
          cv10[i] = cv11[i];
        }

        emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m7, cv10);
        emlrtAssign(&e_y, m7);
        error(message(e_y, &i_emlrtMCI), &j_emlrtMCI);
        emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
      }

      p = FALSE;
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      if (1 > mask->size[1]) {
        overflow = FALSE;
      } else {
        overflow = (mask->size[1] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error();
        emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      i = 1;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (i <= mask->size[1])) {
        overflow = (mask->data[i - 1] == 0);
        if (!overflow) {
          p = TRUE;
          exitg2 = TRUE;
        } else {
          i++;
        }
      }

      emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
      if (!p) {
        exitg1 = 1;
      } else {
        emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        eml_li_find(mask, r1);
        emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        eml_li_find(mask, r3);
        i1 = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = r3->size[1];
        emxEnsureCapacity((emxArray__common *)a, i1, (int32_T)sizeof(creal_T),
                          &emlrtRTEI);
        loop_ub = r3->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = vz->size[1];
          i = r3->data[r3->size[0] * i1];
          a->data[a->size[0] * i1] = vz->data[emlrtDynamicBoundsCheckFastR2012b
            (i, 1, i2, &b_emlrtBCI, emlrtRootTLSGlobal) - 1];
        }

        for (i1 = 0; i1 < 2; i1++) {
          b_iter[i1] = a->size[i1];
        }

        i1 = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        r2->size[1] = b_iter[1];
        emxEnsureCapacity((emxArray__common *)r2, i1, (int32_T)sizeof(creal_T),
                          &e_emlrtRTEI);
        for (i = 0; i < b_iter[1]; i++) {
          mtmp = a->data[i].re;
          a_im = a->data[i].im;
          a_re = a->data[i].re;
          b_a_im = a->data[i].im;
          r2->data[i].re = mtmp * a_re - a_im * b_a_im;
          r2->data[i].im = mtmp * b_a_im + a_im * a_re;
        }

        emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
        i1 = r1->size[1];
        i2 = r2->size[1];
        emlrtSizeEqCheck1DFastR2012b(i1, i2, &emlrtECI, emlrtRootTLSGlobal);
        i = vz->size[1];
        i1 = r4->size[0] * r4->size[1];
        r4->size[0] = 1;
        r4->size[1] = r1->size[1];
        emxEnsureCapacity((emxArray__common *)r4, i1, (int32_T)sizeof(int32_T),
                          &emlrtRTEI);
        loop_ub = r1->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = r1->data[r1->size[0] * i1];
          r4->data[r4->size[0] * i1] = emlrtDynamicBoundsCheckFastR2012b(i2, 1,
            i, &emlrtBCI, emlrtRootTLSGlobal) - 1;
        }

        loop_ub = r2->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          vz->data[r4->data[r4->size[0] * i1]].re = r2->data[r2->size[0] * i1].
            re + c.re;
          vz->data[r4->data[r4->size[0] * i1]].im = r2->data[r2->size[0] * i1].
            im + c.im;
        }

        for (i1 = 0; i1 < 2; i1++) {
          b_iter[i1] = iter->size[i1];
        }

        for (i1 = 0; i1 < 2; i1++) {
          b_mask[i1] = mask->size[i1];
        }

        emlrtSizeEqCheck2DFastR2012b(b_iter, b_mask, &b_emlrtECI,
          emlrtRootTLSGlobal);
        i1 = iter->size[0] * iter->size[1];
        iter->size[0] = 1;
        emxEnsureCapacity((emxArray__common *)iter, i1, (int32_T)sizeof(real_T),
                          &emlrtRTEI);
        i = iter->size[0];
        loop_ub = iter->size[1];
        loop_ub *= i;
        for (i1 = 0; i1 < loop_ub; i1++) {
          iter->data[i1] += (real_T)mask->data[i1];
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_creal_T(&a);
  emxFree_real_T(&y);
  emxFree_creal_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_boolean_T(&mask);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (julia_v4_1.c) */
