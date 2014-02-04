/*
 * julia_v4_api.c
 *
 * Code generation for function 'julia_v4_api'
 *
 * C source code generated on: Tue Feb 04 20:09:16 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "julia_v4.h"
#include "julia_v4_api.h"
#include "julia_v4_emxutil.h"

/* Type Definitions */
#ifndef typedef_ResolvedFunctionInfo
#define typedef_ResolvedFunctionInfo

typedef struct {
  const char * context;
  const char * name;
  const char * dominantType;
  const char * resolved;
  uint32_T fileTimeLo;
  uint32_T fileTimeHi;
  uint32_T mFileTimeLo;
  uint32_T mFileTimeHi;
} ResolvedFunctionInfo;

#endif                                 /*typedef_ResolvedFunctionInfo*/

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "julia_v4_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_creal_T *y);
static const mxArray *b_emlrt_marshallOut(emxArray_creal_T *u);
static creal_T c_emlrt_marshallIn(const mxArray *c, const char_T *identifier);
static creal_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static real_T e_emlrt_marshallIn(const mxArray *maxiter, const char_T
  *identifier);
static void emlrt_marshallIn(const mxArray *vz, const char_T *identifier,
  emxArray_creal_T *y);
static const mxArray *emlrt_marshallOut(emxArray_real_T *u);
static real_T f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret);
static creal_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static real_T i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_creal_T *y)
{
  g_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(emxArray_creal_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = mxCreateNumericArray(2, u->size, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013a(emlrtRootTLSGlobal, m2, (void *)u->data, 8);
  emlrtAssign(&y, m2);
  return y;
}

static creal_T c_emlrt_marshallIn(const mxArray *c, const char_T *identifier)
{
  creal_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(c), &thisId);
  emlrtDestroyArray(&c);
  return y;
}

static creal_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  creal_T y;
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const mxArray *maxiter, const char_T
  *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(emlrtAlias(maxiter), &thisId);
  emlrtDestroyArray(&maxiter);
  return y;
}

static void emlrt_marshallIn(const mxArray *vz, const char_T *identifier,
  emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(vz), &thisId, y);
  emlrtDestroyArray(&vz);
}

static const mxArray *emlrt_marshallOut(emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv1[2] = { 0, 0 };

  const mxArray *m1;
  y = NULL;
  m1 = mxCreateNumericArray(2, (int32_T *)&iv1, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  mxSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

static real_T f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_creal_T *ret)
{
  int32_T iv2[2];
  boolean_T bv0[2];
  int32_T i0;
  static const boolean_T bv1[2] = { FALSE, TRUE };

  int32_T iv3[2];
  for (i0 = 0; i0 < 2; i0++) {
    iv2[i0] = 1 + -2 * i0;
    bv0[i0] = bv1[i0];
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 2U,
    iv2, bv0, iv3);
  i0 = ret->size[0] * ret->size[1];
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
  emxEnsureCapacity((emxArray__common *)ret, i0, (int32_T)sizeof(creal_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, TRUE);
  emlrtDestroyArray(&src);
}

static creal_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  creal_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", TRUE, 0U, 0);
  emlrtImportArrayR2011b(src, &ret, 8, TRUE);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  ResolvedFunctionInfo info[10];
  ResolvedFunctionInfo (*b_info)[10];
  ResolvedFunctionInfo u[10];
  int32_T i;
  const mxArray *y;
  int32_T iv0[1];
  ResolvedFunctionInfo *r0;
  const char * b_u;
  const mxArray *b_y;
  const mxArray *m0;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  uint32_T c_u;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  nameCaptureInfo = NULL;
  b_info = (ResolvedFunctionInfo (*)[10])info;
  (*b_info)[0].context = "[E]H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4.m";
  (*b_info)[0].name = "length";
  (*b_info)[0].dominantType = "double";
  (*b_info)[0].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m";
  (*b_info)[0].fileTimeLo = 1303149806U;
  (*b_info)[0].fileTimeHi = 0U;
  (*b_info)[0].mFileTimeLo = 0U;
  (*b_info)[0].mFileTimeHi = 0U;
  (*b_info)[1].context = "[E]H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4.m";
  (*b_info)[1].name = "abs";
  (*b_info)[1].dominantType = "double";
  (*b_info)[1].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  (*b_info)[1].fileTimeLo = 1343833966U;
  (*b_info)[1].fileTimeHi = 0U;
  (*b_info)[1].mFileTimeLo = 0U;
  (*b_info)[1].mFileTimeHi = 0U;
  (*b_info)[2].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m";
  (*b_info)[2].name = "eml_scalar_abs";
  (*b_info)[2].dominantType = "double";
  (*b_info)[2].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  (*b_info)[2].fileTimeLo = 1286822312U;
  (*b_info)[2].fileTimeHi = 0U;
  (*b_info)[2].mFileTimeLo = 0U;
  (*b_info)[2].mFileTimeHi = 0U;
  (*b_info)[3].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m";
  (*b_info)[3].name = "eml_dlapy2";
  (*b_info)[3].dominantType = "double";
  (*b_info)[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_dlapy2.m";
  (*b_info)[3].fileTimeLo = 1350414254U;
  (*b_info)[3].fileTimeHi = 0U;
  (*b_info)[3].mFileTimeLo = 0U;
  (*b_info)[3].mFileTimeHi = 0U;
  (*b_info)[4].context = "[E]H:/Desktop/GitHub/HPC-2014/CW1/q6/julia_v4.m";
  (*b_info)[4].name = "mpower";
  (*b_info)[4].dominantType = "double";
  (*b_info)[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  (*b_info)[4].fileTimeLo = 1286822442U;
  (*b_info)[4].fileTimeHi = 0U;
  (*b_info)[4].mFileTimeLo = 0U;
  (*b_info)[4].mFileTimeHi = 0U;
  (*b_info)[5].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  (*b_info)[5].name = "power";
  (*b_info)[5].dominantType = "double";
  (*b_info)[5].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  (*b_info)[5].fileTimeLo = 1348195530U;
  (*b_info)[5].fileTimeHi = 0U;
  (*b_info)[5].mFileTimeLo = 0U;
  (*b_info)[5].mFileTimeHi = 0U;
  (*b_info)[6].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  (*b_info)[6].name = "eml_scalar_eg";
  (*b_info)[6].dominantType = "double";
  (*b_info)[6].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  (*b_info)[6].fileTimeLo = 1286822396U;
  (*b_info)[6].fileTimeHi = 0U;
  (*b_info)[6].mFileTimeLo = 0U;
  (*b_info)[6].mFileTimeHi = 0U;
  (*b_info)[7].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  (*b_info)[7].name = "eml_scalexp_alloc";
  (*b_info)[7].dominantType = "double";
  (*b_info)[7].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  (*b_info)[7].fileTimeLo = 1352428460U;
  (*b_info)[7].fileTimeHi = 0U;
  (*b_info)[7].mFileTimeLo = 0U;
  (*b_info)[7].mFileTimeHi = 0U;
  (*b_info)[8].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  (*b_info)[8].name = "eml_scalar_eg";
  (*b_info)[8].dominantType = "double";
  (*b_info)[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  (*b_info)[8].fileTimeLo = 1286822396U;
  (*b_info)[8].fileTimeHi = 0U;
  (*b_info)[8].mFileTimeLo = 0U;
  (*b_info)[8].mFileTimeHi = 0U;
  (*b_info)[9].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power";
  (*b_info)[9].name = "mtimes";
  (*b_info)[9].dominantType = "double";
  (*b_info)[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*b_info)[9].fileTimeLo = 1289523292U;
  (*b_info)[9].fileTimeHi = 0U;
  (*b_info)[9].mFileTimeLo = 0U;
  (*b_info)[9].mFileTimeHi = 0U;
  for (i = 0; i < 10; i++) {
    u[i] = info[i];
  }

  y = NULL;
  iv0[0] = 10;
  emlrtAssign(&y, mxCreateStructArray(1, iv0, 0, NULL));
  for (i = 0; i < 10; i++) {
    r0 = &u[i];
    b_u = r0->context;
    b_y = NULL;
    m0 = mxCreateString(b_u);
    emlrtAssign(&b_y, m0);
    emlrtAddField(y, b_y, "context", i);
    b_u = r0->name;
    c_y = NULL;
    m0 = mxCreateString(b_u);
    emlrtAssign(&c_y, m0);
    emlrtAddField(y, c_y, "name", i);
    b_u = r0->dominantType;
    d_y = NULL;
    m0 = mxCreateString(b_u);
    emlrtAssign(&d_y, m0);
    emlrtAddField(y, d_y, "dominantType", i);
    b_u = r0->resolved;
    e_y = NULL;
    m0 = mxCreateString(b_u);
    emlrtAssign(&e_y, m0);
    emlrtAddField(y, e_y, "resolved", i);
    c_u = r0->fileTimeLo;
    f_y = NULL;
    m0 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m0) = c_u;
    emlrtAssign(&f_y, m0);
    emlrtAddField(y, f_y, "fileTimeLo", i);
    c_u = r0->fileTimeHi;
    g_y = NULL;
    m0 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m0) = c_u;
    emlrtAssign(&g_y, m0);
    emlrtAddField(y, g_y, "fileTimeHi", i);
    c_u = r0->mFileTimeLo;
    h_y = NULL;
    m0 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m0) = c_u;
    emlrtAssign(&h_y, m0);
    emlrtAddField(y, h_y, "mFileTimeLo", i);
    c_u = r0->mFileTimeHi;
    i_y = NULL;
    m0 = mxCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)mxGetData(m0) = c_u;
    emlrtAssign(&i_y, m0);
    emlrtAddField(y, i_y, "mFileTimeHi", i);
  }

  emlrtAssign(&nameCaptureInfo, y);
  emlrtNameCapturePostProcessR2012a(emlrtAlias(nameCaptureInfo));
  return nameCaptureInfo;
}

void julia_v4_api(const mxArray * const prhs[3], const mxArray *plhs[2])
{
  emxArray_creal_T *vz;
  emxArray_real_T *iter;
  creal_T c;
  real_T maxiter;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_creal_T(&vz, 2, &b_emlrtRTEI, TRUE);
  emxInit_real_T(&iter, 2, &b_emlrtRTEI, TRUE);

  /* Marshall function inputs */
  emlrt_marshallIn(emlrtAliasP(prhs[0]), "vz", vz);
  c = c_emlrt_marshallIn(emlrtAliasP(prhs[1]), "c");
  maxiter = e_emlrt_marshallIn(emlrtAliasP(prhs[2]), "maxiter");

  /* Invoke the target function */
  julia_v4(vz, c, maxiter, iter);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(iter);
  plhs[1] = b_emlrt_marshallOut(vz);
  iter->canFreeData = FALSE;
  emxFree_real_T(&iter);
  emxFree_creal_T(&vz);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (julia_v4_api.c) */
