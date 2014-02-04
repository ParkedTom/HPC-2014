/*
 * julia_v4_1_api.c
 *
 * Code generation for function 'julia_v4_1_api'
 *
 * C source code generated on: Tue Feb  4 00:21:00 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4_1.h"
#include "julia_v4_1_api.h"
#include "julia_v4_1_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "julia_v4_1_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, emxArray_creal_T
  *u);
static creal_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c, const
  char_T *identifier);
static creal_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *maxiter,
  const char_T *identifier);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *vz, const
  char_T *identifier, emxArray_creal_T *y);
static const mxArray *emlrt_marshallOut(emxArray_real_T *u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);
static creal_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, emxArray_creal_T
  *u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m1, (void *)u->data, 8);
  emlrtAssign(&y, m1);
  return y;
}

static creal_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c, const
  char_T *identifier)
{
  creal_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(c), &thisId);
  emlrtDestroyArray(&c);
  return y;
}

static creal_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  creal_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *maxiter,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(maxiter), &thisId);
  emlrtDestroyArray(&maxiter);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *vz, const
  char_T *identifier, emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(vz), &thisId, y);
  emlrtDestroyArray(&vz);
}

static const mxArray *emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv0[2] = { 0, 0 };

  const mxArray *m0;
  y = NULL;
  m0 = mxCreateNumericArray(2, (int32_T *)&iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u->data);
  mxSetDimensions((mxArray *)m0, u->size, 2);
  emlrtAssign(&y, m0);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  int32_T iv1[2];
  boolean_T bv0[2];
  int32_T i0;
  static const boolean_T bv1[2] = { FALSE, TRUE };

  int32_T iv2[2];
  for (i0 = 0; i0 < 2; i0++) {
    iv1[i0] = 1 + -2 * i0;
    bv0[i0] = bv1[i0];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", TRUE, 2U, iv1, bv0, iv2);
  i0 = ret->size[0] * ret->size[1];
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i0, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, TRUE);
  emlrtDestroyArray(&src);
}

static creal_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  creal_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", TRUE, 0U, 0);
  emlrtImportArrayR2011b(src, &ret, 8, TRUE);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void julia_v4_1_api(emlrtStack *sp, const mxArray * const prhs[3], const mxArray
                    *plhs[2])
{
  emxArray_creal_T *vz;
  emxArray_real_T *iter;
  creal_T c;
  real_T maxiter;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_creal_T(sp, &vz, 2, &b_emlrtRTEI, TRUE);
  emxInit_real_T(sp, &iter, 2, &b_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  emlrt_marshallIn(sp, emlrtAliasP(prhs[0]), "vz", vz);
  c = c_emlrt_marshallIn(sp, emlrtAliasP(prhs[1]), "c");
  maxiter = e_emlrt_marshallIn(sp, emlrtAliasP(prhs[2]), "maxiter");

  /* Invoke the target function */
  julia_v4_1(sp, vz, c, maxiter, iter);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(iter);
  plhs[1] = b_emlrt_marshallOut(sp, vz);
  iter->canFreeData = FALSE;
  emxFree_real_T(&iter);
  emxFree_creal_T(&vz);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (julia_v4_1_api.c) */
