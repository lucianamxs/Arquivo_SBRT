/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Tue Aug  4 10:39:14 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "asl_adjust.h"
#include "sum.h"
#include "asl_adjust_mexutil.h"
#include "asl_adjust_data.h"

/* Variable Definitions */
static emlrtRSInfo r_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo v_emlrtRSI = { 17, "sum",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo w_emlrtRSI = { 20, "sum",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo x_emlrtRSI = { 61, "sum",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo e_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo g_emlrtMCI = { 18, 9, "sum",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo h_emlrtMCI = { 17, 19, "sum",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo i_emlrtMCI = { 23, 9, "sum",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtMCInfo j_emlrtMCI = { 20, 19, "sum",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/sum.m" };

/* Function Declarations */
static const mxArray *b_message(const mxArray *b, const mxArray *c, emlrtMCInfo *
  location);

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

void check_forloop_overflow_error(boolean_T overflow)
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
    emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  }
}

real_T sum(const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  boolean_T p;
  int32_T i;
  int32_T exitg1;
  int32_T i2;
  const mxArray *b_y;
  static const int32_T iv4[2] = { 1, 30 };

  const mxArray *m2;
  char_T cv8[30];
  static const char_T cv9[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv5[2] = { 1, 36 };

  char_T cv10[36];
  static const char_T cv11[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  overflow = FALSE;
  p = FALSE;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (1 + i <= 1) {
        i2 = x->size[i];
      } else {
        i2 = 1;
      }

      if (i2 != 0) {
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      p = TRUE;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!p) {
  } else {
    overflow = TRUE;
  }

  if (!overflow) {
  } else {
    emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m2 = mxCreateCharArray(2, iv4);
    for (i = 0; i < 30; i++) {
      cv8[i] = cv9[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 30, m2, cv8);
    emlrtAssign(&b_y, m2);
    error(message(b_y, &g_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    emlrtPushRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
    c_y = NULL;
    m2 = mxCreateCharArray(2, iv5);
    for (i = 0; i < 36; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m2, cv10);
    emlrtAssign(&c_y, m2);
    error(message(c_y, &i_emlrtMCI), &j_emlrtMCI);
    emlrtPopRtStackR2012b(&w_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    emlrtPushRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    if (2 > x->size[0]) {
      overflow = FALSE;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      check_forloop_overflow_error(TRUE);
      emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtPopRtStackR2012b(&x_emlrtRSI, emlrtRootTLSGlobal);
    for (i = 2; i <= x->size[0]; i++) {
      y += x->data[i - 1];
    }
  }

  return y;
}

/* End of code generation (sum.c) */
