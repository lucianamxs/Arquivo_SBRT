/*
 * vad_s.c
 *
 * Code generation for function 'vad_s'
 *
 * C source code generated on: Tue Aug  4 10:39:12 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "vad_s.h"
#include "vad_s_emxutil.h"
#include "power.h"
#include "abs.h"
#include "vad_s_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 13, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtRSInfo b_emlrtRSI = { 16, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtRSInfo d_emlrtRSI = { 16, "max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo e_emlrtRSI = { 18, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo f_emlrtRSI = { 38, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo g_emlrtRSI = { 73, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo h_emlrtRSI = { 88, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo i_emlrtRSI = { 192, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo j_emlrtRSI = { 219, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo k_emlrtRSI = { 12, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo l_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo m_emlrtRSI = { 41, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo o_emlrtRSI = { 230, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo p_emlrtRSI = { 239, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRSInfo q_emlrtRSI = { 11, "eml_li_find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo r_emlrtRSI = { 14, "eml_li_find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo s_emlrtRSI = { 26, "eml_li_find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo t_emlrtRSI = { 39, "eml_li_find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo emlrtMCI = { 41, 9, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo b_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo c_emlrtMCI = { 74, 9, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo d_emlrtMCI = { 73, 19, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo e_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo h_emlrtMCI = { 239, 9, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo i_emlrtMCI = { 14, 5, "eml_li_find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 18, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtRTEInfo b_emlrtRTEI = { 127, 5, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo c_emlrtRTEI = { 13, 1, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtRTEInfo d_emlrtRTEI = { 14, 1, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtRTEInfo e_emlrtRTEI = { 16, 1, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtRTEInfo f_emlrtRTEI = { 33, 6, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo i_emlrtRTEI = { 20, 9, "eml_li_find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 14, 8, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtECInfo emlrtECI = { -1, 14, 8, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 14, 19, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtECInfo b_emlrtECI = { -1, 14, 19, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtECInfo c_emlrtECI = { 2, 16, 8, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 21, 19, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 21, 26, "idx2", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 21, 17, "x", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtECInfo d_emlrtECI = { -1, 21, 17, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtRTEInfo k_emlrtRTEI = { 22, 9, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 23, 32, "idx2", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 23, 41, "idx2", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 23, 30, "x", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtECInfo e_emlrtECI = { -1, 23, 30, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 25, 28, "idx2", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 25, 38, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 25, 26, "x", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtECInfo f_emlrtECI = { -1, 25, 26, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 27, 20, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 27, 27, "idx2", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 27, 18, "x", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtECInfo g_emlrtECI = { -1, 27, 18, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 27, 40, "idx2", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 27, 48, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 27, 38, "x", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtECInfo h_emlrtECI = { -1, 27, 38, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 30, 15, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 30, 22, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 30, 13, "x", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtECInfo i_emlrtECI = { -1, 30, 13, "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m" };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 16, 9, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 16, 28, "idx", "vad_s",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/vad/vad_s.m", 0 };

/* Function Declarations */
static const mxArray *b_message(const mxArray *b, const mxArray *c, emlrtMCInfo *
  location);
static void check_forloop_overflow_error(boolean_T overflow);
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

static void check_forloop_overflow_error(boolean_T overflow)
{
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 34 };

  const mxArray *m1;
  char_T cv4[34];
  int32_T i;
  static const char_T cv5[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 23 };

  char_T cv6[23];
  static const char_T cv7[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  if (!overflow) {
  } else {
    emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m1 = mxCreateCharArray(2, iv2);
    for (i = 0; i < 34; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m1, cv4);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = mxCreateCharArray(2, iv3);
    for (i = 0; i < 23; i++) {
      cv6[i] = cv7[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m1, cv6);
    emlrtAssign(&b_y, m1);
    error(b_message(y, b_y, &e_emlrtMCI), &f_emlrtMCI);
    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  }
}

static void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m2;
  int32_T j;
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  k = 0;
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (k <= x->size[0]) {
  } else {
    emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m2 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m2);
    error(b_y, &i_emlrtMCI);
    emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  }

  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &i_emlrtRTEI);
  j = 0;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 1; i <= x->size[0]; i++) {
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

void vad_s(const emxArray_real_T *x, real_T fs, emxArray_real_T *x_new)
{
  emxArray_real_T *diff;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 36 };

  const mxArray *m0;
  char_T cv0[36];
  int32_T i;
  static const char_T cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 39 };

  char_T cv2[39];
  static const char_T cv3[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  real_T thresh;
  int32_T ix;
  boolean_T exitg3;
  emxArray_boolean_T *b_x;
  emxArray_real_T *r0;
  int32_T i0;
  emxArray_int32_T *ii;
  int32_T b_ii;
  boolean_T exitg2;
  boolean_T guard2 = FALSE;
  const mxArray *c_y;
  emxArray_int32_T *c_ii;
  emxArray_real_T *idx;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  emxArray_boolean_T *b_diff;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  const mxArray *d_y;
  emxArray_int32_T *d_ii;
  emxArray_int32_T *r1;
  emxArray_real_T *idx2;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&diff, 1, &d_emlrtRTEI, TRUE);

  /*  a simple Voice Activity Detection program for speech processing */
  /*  an energy threshold is used to remove the silence parts of speech signal */
  /*  the speech is assumed to be clean */
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  b_abs(x, diff);
  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  if ((diff->size[0] == 1) || (diff->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m0 = mxCreateCharArray(2, iv0);
    for (i = 0; i < 36; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, cv0);
    emlrtAssign(&y, m0);
    error(message(y, &emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (diff->size[0] > 0) {
  } else {
    emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 39; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m0, cv2);
    emlrtAssign(&b_y, m0);
    error(message(b_y, &c_emlrtMCI), &d_emlrtMCI);
    emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  i = 1;
  thresh = diff->data[0];
  if (diff->size[0] > 1) {
    if (muDoubleScalarIsNaN(diff->data[0])) {
      emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      if (2 > diff->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (diff->size[0] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error(TRUE);
        emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
      ix = 2;
      exitg3 = FALSE;
      while ((exitg3 == FALSE) && (ix <= diff->size[0])) {
        i = ix;
        if (!muDoubleScalarIsNaN(diff->data[ix - 1])) {
          thresh = diff->data[ix - 1];
          exitg3 = TRUE;
        } else {
          ix++;
        }
      }
    }

    if (i < diff->size[0]) {
      emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      if (i + 1 > diff->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (diff->size[0] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error(TRUE);
        emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
      while (i + 1 <= diff->size[0]) {
        if (diff->data[i] > thresh) {
          thresh = diff->data[i];
        }

        i++;
      }
    }
  }

  emxInit_boolean_T(&b_x, 1, &emlrtRTEI, TRUE);
  emxInit_real_T(&r0, 1, &emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  thresh = thresh * thresh / 100000.0;
  power(x, r0);
  i0 = b_x->size[0];
  b_x->size[0] = r0->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, i0, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ix = r0->size[0];
  for (i0 = 0; i0 < ix; i0++) {
    b_x->data[i0] = (r0->data[i0] > thresh);
  }

  emxInit_int32_T(&ii, 1, &f_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  i = 0;
  i0 = ii->size[0];
  ii->size[0] = b_x->size[0];
  emxEnsureCapacity((emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > b_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (b_x->size[0] > 2147483646);
  }

  if (overflow) {
    emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error(TRUE);
    emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_ii = 1;
  exitg2 = FALSE;
  while ((exitg2 == FALSE) && (b_ii <= b_x->size[0])) {
    guard2 = FALSE;
    if (b_x->data[b_ii - 1]) {
      i++;
      ii->data[i - 1] = b_ii;
      if (i >= b_x->size[0]) {
        exitg2 = TRUE;
      } else {
        guard2 = TRUE;
      }
    } else {
      guard2 = TRUE;
    }

    if (guard2 == TRUE) {
      b_ii++;
    }
  }

  if (i <= b_x->size[0]) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m0 = mxCreateString("Assertion failed.");
    emlrtAssign(&c_y, m0);
    error(c_y, &h_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (b_x->size[0] == 1) {
    if (i == 0) {
      i0 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                        &emlrtRTEI);
    }
  } else {
    if (1 > i) {
      ix = 0;
    } else {
      ix = i;
    }

    emxInit_int32_T(&c_ii, 1, &emlrtRTEI, TRUE);
    i0 = c_ii->size[0];
    c_ii->size[0] = ix;
    emxEnsureCapacity((emxArray__common *)c_ii, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < ix; i0++) {
      c_ii->data[i0] = ii->data[i0];
    }

    i0 = ii->size[0];
    ii->size[0] = c_ii->size[0];
    emxEnsureCapacity((emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    ix = c_ii->size[0];
    for (i0 = 0; i0 < ix; i0++) {
      ii->data[i0] = c_ii->data[i0];
    }

    emxFree_int32_T(&c_ii);
  }

  emxInit_real_T(&idx, 1, &c_emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  i0 = idx->size[0];
  idx->size[0] = ii->size[0];
  emxEnsureCapacity((emxArray__common *)idx, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = ii->size[0];
  for (i0 = 0; i0 < ix; i0++) {
    idx->data[i0] = ii->data[i0];
  }

  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);

  /*  or 30db? */
  if (2 > idx->size[0]) {
    i0 = 1;
    i1 = 1;
  } else {
    i0 = 2;
    i1 = idx->size[0];
    i2 = idx->size[0];
    i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &emlrtBCI,
      emlrtRootTLSGlobal) + 1;
  }

  emlrtVectorVectorIndexCheckR2012b(idx->size[0], 1, 1, i1 - i0, &emlrtECI,
    emlrtRootTLSGlobal);
  if (1 > idx->size[0] - 1) {
    i2 = 0;
  } else {
    i2 = idx->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i2, &b_emlrtBCI, emlrtRootTLSGlobal);
    i2 = idx->size[0];
    i3 = idx->size[0] - 1;
    i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &b_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  emlrtVectorVectorIndexCheckR2012b(idx->size[0], 1, 1, i2, &b_emlrtECI,
    emlrtRootTLSGlobal);
  i3 = i1 - i0;
  emlrtSizeEqCheck1DFastR2012b(i3, i2, &emlrtECI, emlrtRootTLSGlobal);
  i2 = diff->size[0];
  diff->size[0] = i1 - i0;
  emxEnsureCapacity((emxArray__common *)diff, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = i1 - i0;
  for (i1 = 0; i1 < ix; i1++) {
    diff->data[i1] = idx->data[(i0 + i1) - 1] - idx->data[i1];
  }

  emxInit_boolean_T(&b_diff, 1, &emlrtRTEI, TRUE);
  thresh = 0.05 * fs;

  /*  set threshold to 50ms */
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  i0 = b_diff->size[0];
  b_diff->size[0] = diff->size[0];
  emxEnsureCapacity((emxArray__common *)b_diff, i0, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ix = diff->size[0];
  for (i0 = 0; i0 < ix; i0++) {
    b_diff->data[i0] = (diff->data[i0] > thresh);
  }

  eml_li_find(b_diff, ii);
  i0 = r0->size[0];
  r0->size[0] = ii->size[0];
  emxEnsureCapacity((emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = ii->size[0];
  emxFree_boolean_T(&b_diff);
  for (i0 = 0; i0 < ix; i0++) {
    i1 = idx->size[0];
    i2 = ii->data[i0];
    r0->data[i0] = idx->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
      &u_emlrtBCI, emlrtRootTLSGlobal) - 1];
  }

  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  i0 = b_x->size[0];
  b_x->size[0] = diff->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, i0, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ix = diff->size[0];
  for (i0 = 0; i0 < ix; i0++) {
    b_x->data[i0] = (diff->data[i0] > thresh);
  }

  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  i = 0;
  i0 = ii->size[0];
  ii->size[0] = b_x->size[0];
  emxEnsureCapacity((emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  b_ii = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (b_ii <= b_x->size[0])) {
    guard1 = FALSE;
    if (b_x->data[b_ii - 1]) {
      i++;
      ii->data[i - 1] = b_ii;
      if (i >= b_x->size[0]) {
        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      b_ii++;
    }
  }

  if (i <= b_x->size[0]) {
  } else {
    emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
    d_y = NULL;
    m0 = mxCreateString("Assertion failed.");
    emlrtAssign(&d_y, m0);
    error(d_y, &h_emlrtMCI);
    emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (b_x->size[0] == 1) {
    if (i == 0) {
      i0 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                        &emlrtRTEI);
    }
  } else {
    if (1 > i) {
      ix = 0;
    } else {
      ix = i;
    }

    emxInit_int32_T(&d_ii, 1, &emlrtRTEI, TRUE);
    i0 = d_ii->size[0];
    d_ii->size[0] = ix;
    emxEnsureCapacity((emxArray__common *)d_ii, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < ix; i0++) {
      d_ii->data[i0] = ii->data[i0];
    }

    i0 = ii->size[0];
    ii->size[0] = d_ii->size[0];
    emxEnsureCapacity((emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    ix = d_ii->size[0];
    for (i0 = 0; i0 < ix; i0++) {
      ii->data[i0] = d_ii->data[i0];
    }

    emxFree_int32_T(&d_ii);
  }

  emxFree_boolean_T(&b_x);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  i0 = diff->size[0];
  diff->size[0] = ii->size[0];
  emxEnsureCapacity((emxArray__common *)diff, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ix = ii->size[0];
  for (i0 = 0; i0 < ix; i0++) {
    diff->data[i0] = ii->data[i0];
  }

  ix = ii->size[0];
  for (i0 = 0; i0 < ix; i0++) {
    i1 = idx->size[0];
    i2 = (int32_T)((real_T)ii->data[i0] + 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &v_emlrtBCI, emlrtRootTLSGlobal);
  }

  emxFree_int32_T(&ii);
  emxInit_int32_T(&r1, 1, &emlrtRTEI, TRUE);
  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  i0 = r0->size[0];
  i1 = diff->size[0];
  emlrtDimSizeEqCheckFastR2012b(i0, i1, &c_emlrtECI, emlrtRootTLSGlobal);
  i0 = r1->size[0];
  r1->size[0] = diff->size[0];
  emxEnsureCapacity((emxArray__common *)r1, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  ix = diff->size[0];
  for (i0 = 0; i0 < ix; i0++) {
    r1->data[i0] = (int32_T)(diff->data[i0] + 1.0);
  }

  emxFree_real_T(&diff);
  b_emxInit_real_T(&idx2, 2, &e_emlrtRTEI, TRUE);
  i = r0->size[0];
  ix = r1->size[0];
  i0 = idx2->size[0] * idx2->size[1];
  idx2->size[0] = 2;
  idx2->size[1] = i;
  emxEnsureCapacity((emxArray__common *)idx2, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < i; i0++) {
    i1 = 0;
    while (i1 <= 0) {
      idx2->data[idx2->size[0] * i0] = r0->data[i0];
      i1 = 1;
    }
  }

  emxFree_real_T(&r0);
  for (i0 = 0; i0 < ix; i0++) {
    i1 = 0;
    while (i1 <= 0) {
      idx2->data[1 + idx2->size[0] * i0] = idx->data[r1->data[i0] - 1];
      i1 = 1;
    }
  }

  emxFree_int32_T(&r1);
  ix = idx2->size[1] << 1;
  if (!(ix == 0)) {
    ix = idx2->size[1] << 1;
    if (ix > 2) {
      i0 = idx->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &c_emlrtBCI,
        emlrtRootTLSGlobal);
      ix = idx2->size[1] << 1;
      emlrtDynamicBoundsCheckFastR2012b(1, 1, ix, &d_emlrtBCI,
        emlrtRootTLSGlobal);
      if (idx->data[0] > idx2->data[0]) {
        i0 = 1;
        i1 = 1;
      } else {
        i0 = x->size[0];
        i1 = (int32_T)idx->data[0];
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &e_emlrtBCI,
          emlrtRootTLSGlobal);
        i1 = x->size[0];
        i2 = (int32_T)idx2->data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &e_emlrtBCI,
          emlrtRootTLSGlobal) + 1;
      }

      emlrtVectorVectorIndexCheckR2012b(x->size[0], 1, 1, i1 - i0, &d_emlrtECI,
        emlrtRootTLSGlobal);
      i2 = x_new->size[0];
      x_new->size[0] = i1 - i0;
      emxEnsureCapacity((emxArray__common *)x_new, i2, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      ix = i1 - i0;
      for (i1 = 0; i1 < ix; i1++) {
        x_new->data[i1] = x->data[(i0 + i1) - 1];
      }

      ix = idx2->size[1] << 1;
      i0 = (int32_T)(((real_T)ix - 2.0) / 2.0);
      ix = idx2->size[1] << 1;
      emlrtForLoopVectorCheckR2012b(2.0, 2.0, (real_T)ix - 2.0, mxDOUBLE_CLASS,
        i0, &k_emlrtRTEI, emlrtRootTLSGlobal);
      b_ii = 0;
      while (b_ii <= i0 - 1) {
        i = 2 + (b_ii << 1);
        ix = idx2->size[1] << 1;
        emlrtDynamicBoundsCheckFastR2012b(i, 1, ix, &f_emlrtBCI,
          emlrtRootTLSGlobal);
        ix = idx2->size[1] << 1;
        i1 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, ix, &g_emlrtBCI,
          emlrtRootTLSGlobal);
        if (idx2->data[i - 1] > idx2->data[i]) {
          i1 = 1;
          i2 = 1;
        } else {
          i1 = x->size[0];
          i2 = (int32_T)idx2->data[i - 1];
          i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &h_emlrtBCI,
            emlrtRootTLSGlobal);
          i2 = x->size[0];
          i3 = (int32_T)idx2->data[i];
          i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &h_emlrtBCI,
            emlrtRootTLSGlobal) + 1;
        }

        emlrtVectorVectorIndexCheckR2012b(x->size[0], 1, 1, i2 - i1, &e_emlrtECI,
          emlrtRootTLSGlobal);
        i = x_new->size[0];
        i3 = x_new->size[0];
        x_new->size[0] = (i + i2) - i1;
        emxEnsureCapacity((emxArray__common *)x_new, i3, (int32_T)sizeof(real_T),
                          &emlrtRTEI);
        ix = i2 - i1;
        for (i2 = 0; i2 < ix; i2++) {
          x_new->data[i + i2] = x->data[(i1 + i2) - 1];
        }

        b_ii++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
          emlrtRootTLSGlobal);
      }

      ix = idx2->size[1] << 1;
      i = idx2->size[1] << 1;
      emlrtDynamicBoundsCheckFastR2012b(ix, 1, i, &i_emlrtBCI,
        emlrtRootTLSGlobal);
      i0 = idx->size[0];
      i1 = idx->size[0];
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &j_emlrtBCI,
        emlrtRootTLSGlobal);
      ix = idx2->size[1] << 1;
      if (idx2->data[ix - 1] > idx->data[idx->size[0] - 1]) {
        i0 = 1;
        i1 = 1;
      } else {
        ix = idx2->size[1] << 1;
        i0 = x->size[0];
        i1 = (int32_T)idx2->data[ix - 1];
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &k_emlrtBCI,
          emlrtRootTLSGlobal);
        i1 = x->size[0];
        i2 = (int32_T)idx->data[idx->size[0] - 1];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &k_emlrtBCI,
          emlrtRootTLSGlobal) + 1;
      }

      emlrtVectorVectorIndexCheckR2012b(x->size[0], 1, 1, i1 - i0, &f_emlrtECI,
        emlrtRootTLSGlobal);
      i = x_new->size[0];
      i2 = x_new->size[0];
      x_new->size[0] = (i + i1) - i0;
      emxEnsureCapacity((emxArray__common *)x_new, i2, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      ix = i1 - i0;
      for (i1 = 0; i1 < ix; i1++) {
        x_new->data[i + i1] = x->data[(i0 + i1) - 1];
      }
    } else {
      i0 = idx->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &l_emlrtBCI,
        emlrtRootTLSGlobal);
      ix = idx2->size[1] << 1;
      emlrtDynamicBoundsCheckFastR2012b(1, 1, ix, &m_emlrtBCI,
        emlrtRootTLSGlobal);
      if (idx->data[0] > idx2->data[0]) {
        i0 = 1;
        i1 = 1;
      } else {
        i0 = x->size[0];
        i1 = (int32_T)idx->data[0];
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &n_emlrtBCI,
          emlrtRootTLSGlobal);
        i1 = x->size[0];
        i2 = (int32_T)idx2->data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &n_emlrtBCI,
          emlrtRootTLSGlobal) + 1;
      }

      emlrtVectorVectorIndexCheckR2012b(x->size[0], 1, 1, i1 - i0, &g_emlrtECI,
        emlrtRootTLSGlobal);
      ix = idx2->size[1] << 1;
      emlrtDynamicBoundsCheckFastR2012b(1, 1, ix, &o_emlrtBCI,
        emlrtRootTLSGlobal);
      i2 = idx->size[0];
      i3 = idx->size[0];
      emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &p_emlrtBCI,
        emlrtRootTLSGlobal);
      if (idx2->data[0] > idx->data[idx->size[0] - 1]) {
        i2 = 1;
        i3 = 1;
      } else {
        i2 = x->size[0];
        i3 = (int32_T)idx2->data[0];
        i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &q_emlrtBCI,
          emlrtRootTLSGlobal);
        i3 = x->size[0];
        i = (int32_T)idx->data[idx->size[0] - 1];
        i3 = emlrtDynamicBoundsCheckFastR2012b(i, 1, i3, &q_emlrtBCI,
          emlrtRootTLSGlobal) + 1;
      }

      emlrtVectorVectorIndexCheckR2012b(x->size[0], 1, 1, i3 - i2, &h_emlrtECI,
        emlrtRootTLSGlobal);
      i = x_new->size[0];
      x_new->size[0] = ((i1 - i0) + i3) - i2;
      emxEnsureCapacity((emxArray__common *)x_new, i, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      ix = i1 - i0;
      for (i = 0; i < ix; i++) {
        x_new->data[i] = x->data[(i0 + i) - 1];
      }

      ix = i3 - i2;
      for (i3 = 0; i3 < ix; i3++) {
        x_new->data[(i3 + i1) - i0] = x->data[(i2 + i3) - 1];
      }
    }
  } else {
    i0 = idx->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i0, &r_emlrtBCI, emlrtRootTLSGlobal);
    i0 = idx->size[0];
    i1 = idx->size[0];
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &s_emlrtBCI, emlrtRootTLSGlobal);
    if (idx->data[0] > idx->data[idx->size[0] - 1]) {
      i0 = 1;
      i1 = 1;
    } else {
      i0 = x->size[0];
      i1 = (int32_T)idx->data[0];
      i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &t_emlrtBCI,
        emlrtRootTLSGlobal);
      i1 = x->size[0];
      i2 = (int32_T)idx->data[idx->size[0] - 1];
      i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &t_emlrtBCI,
        emlrtRootTLSGlobal) + 1;
    }

    emlrtVectorVectorIndexCheckR2012b(x->size[0], 1, 1, i1 - i0, &i_emlrtECI,
      emlrtRootTLSGlobal);
    i2 = x_new->size[0];
    x_new->size[0] = i1 - i0;
    emxEnsureCapacity((emxArray__common *)x_new, i2, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ix = i1 - i0;
    for (i1 = 0; i1 < ix; i1++) {
      x_new->data[i1] = x->data[(i0 + i1) - 1];
    }
  }

  emxFree_real_T(&idx2);
  emxFree_real_T(&idx);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (vad_s.c) */
