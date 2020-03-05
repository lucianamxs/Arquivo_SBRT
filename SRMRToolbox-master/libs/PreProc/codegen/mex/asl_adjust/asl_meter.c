/*
 * asl_meter.c
 *
 * Code generation for function 'asl_meter'
 *
 * C source code generated on: Tue Aug  4 10:39:14 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "asl_adjust.h"
#include "asl_meter.h"
#include "asl_adjust_emxutil.h"
#include "sum.h"
#include "power.h"
#include "abs.h"
#include "asl_adjust_mexutil.h"
#include "asl_adjust_data.h"

/* Variable Definitions */
static emlrtRSInfo c_emlrtRSI = { 16, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRSInfo d_emlrtRSI = { 47, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRSInfo e_emlrtRSI = { 48, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRSInfo f_emlrtRSI = { 49, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRSInfo g_emlrtRSI = { 50, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRSInfo h_emlrtRSI = { 70, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRSInfo i_emlrtRSI = { 75, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRSInfo j_emlrtRSI = { 16, "max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/datafun/max.m" };

static emlrtRSInfo k_emlrtRSI = { 18, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo l_emlrtRSI = { 38, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo m_emlrtRSI = { 73, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo n_emlrtRSI = { 88, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo o_emlrtRSI = { 192, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo p_emlrtRSI = { 219, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRSInfo u_emlrtRSI = { 20, "eml_error",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

static emlrtRSInfo y_emlrtRSI = { 21, "colon",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ab_emlrtRSI = { 79, "colon",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo bb_emlrtRSI = { 280, "colon",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo cb_emlrtRSI = { 288, "colon",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo eb_emlrtRSI = { 14, "log10",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elfun/log10.m" };

static emlrtRSInfo fb_emlrtRSI = { 41, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtMCInfo emlrtMCI = { 41, 9, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo b_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo c_emlrtMCI = { 74, 9, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtMCInfo d_emlrtMCI = { 73, 19, "eml_min_or_max",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_min_or_max.m" };

static emlrtRTEInfo b_emlrtRTEI = { 1, 28, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRTEInfo c_emlrtRTEI = { 281, 1, "colon",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRTEInfo d_emlrtRTEI = { 127, 5, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtRTEInfo e_emlrtRTEI = { 53, 5, "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m" };

static emlrtRTEInfo f_emlrtRTEI = { 33, 6, "find",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/elmat/find.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 54, 21, "x", "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 78, 6, "i", "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { 1, 15, 80, 44, "AdB", "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { 1, 15, 80, 60, "CdB", "asl_meter",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_meter.m",
  0 };

static emlrtRTEInfo j_emlrtRTEI = { 20, 5, "eml_error",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Declarations */
static void eml_error(void);

/* Function Definitions */
static void eml_error(void)
{
  static char_T cv12[5][1] = { { 'l' }, { 'o' }, { 'g' }, { '1' }, { '0' } };

  emlrtPushRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
  emlrtErrorWithMessageIdR2012b(emlrtRootTLSGlobal, &j_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 5, cv12);
  emlrtPopRtStackR2012b(&u_emlrtRSI, emlrtRootTLSGlobal);
}

real_T asl_meter(emxArray_real_T *x, real_T fs)
{
  real_T ActiveSpeechLevel;
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

  int32_T ixstart;
  real_T g;
  boolean_T exitg2;
  int32_T i1;
  real_T I;
  real_T a[15];
  real_T h[15];
  emxArray_real_T *b_i;
  real_T p;
  real_T q;
  real_T sq;
  int32_T absb;
  int32_T apnd;
  emxArray_real_T *c_y;
  real_T midthr;
  real_T diff;
  static const real_T c[15] = { 3.0517578125E-5, 6.103515625E-5, 0.0001220703125,
    0.000244140625, 0.00048828125, 0.0009765625, 0.001953125, 0.00390625,
    0.0078125, 0.015625, 0.03125, 0.0625, 0.125, 0.25, 0.5 };

  emxArray_int32_T *ii;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  static const real_T CdB[15] = { -90.308998699194362, -84.288398785914737,
    -78.267798872635112, -72.247198959355487, -66.226599046075862,
    -60.205999132796244, -54.185399219516619, -48.164799306236993,
    -42.144199392957368, -36.123599479677743, -30.102999566398122,
    -24.082399653118497, -18.061799739838872, -12.041199826559248,
    -6.0205999132796242 };

  emxArray_int32_T *b_ii;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /*  function ActiveSpeechLevel=asl_meter(x,fs) */
  /*  */
  /*  x: the input speech samples,  */
  /*     it can be imported result by 'wavread' for '.wav' file or 'loadb' for '.pcm' file.  */
  /*     if the input x is has a range larger than (-1,1), it will be considered as pcm data and divided by 2^15.  */
  /*  */
  /*  fs: sampling frequency */
  /*   */
  /*  */
  /*  Active speech level measurement following ITU-T P.56  */
  /*  Author: Lu Huo, LNS/CAU, December, 2005, Kiel. */
  /*  */
  /*   */
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m0 = mxCreateCharArray(2, iv0);
    for (i = 0; i < 36; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 36, m0, cv0);
    emlrtAssign(&y, m0);
    error(message(y, &emlrtMCI), &b_emlrtMCI);
    emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (x->size[0] > 0) {
  } else {
    emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m0 = mxCreateCharArray(2, iv1);
    for (i = 0; i < 39; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 39, m0, cv2);
    emlrtAssign(&b_y, m0);
    error(message(b_y, &c_emlrtMCI), &d_emlrtMCI);
    emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  ixstart = 1;
  g = x->data[0];
  if (x->size[0] > 1) {
    if (muDoubleScalarIsNaN(x->data[0])) {
      emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
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

      emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
      i = 2;
      exitg2 = FALSE;
      while ((exitg2 == FALSE) && (i <= x->size[0])) {
        ixstart = i;
        if (!muDoubleScalarIsNaN(x->data[i - 1])) {
          g = x->data[i - 1];
          exitg2 = TRUE;
        } else {
          i++;
        }
      }
    }

    if (ixstart < x->size[0]) {
      emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      if (ixstart + 1 > x->size[0]) {
        overflow = FALSE;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
        check_forloop_overflow_error(TRUE);
        emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
      }

      emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
      while (ixstart + 1 <= x->size[0]) {
        if (x->data[ixstart] > g) {
          g = x->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  if (g > 1.0) {
    i1 = x->size[0];
    emxEnsureCapacity((emxArray__common *)x, i1, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    ixstart = x->size[0];
    for (i1 = 0; i1 < ixstart; i1++) {
      x->data[i1] /= 32768.0;
    }
  }

  /*  Bit number per sample */
  /*  Time constant of smoothing in seconds */
  g = muDoubleScalarExp(-1.0 / (0.03 * fs));

  /*  Time of handover in seconds */
  I = muDoubleScalarFloor(0.2 * fs + 0.5);

  /*  Rounded up tp next interger */
  /*  Margin in dB, difference between threshold and active speech level. */
  for (i = 0; i < 15; i++) {
    a[i] = 0.0;

    /*  Activity count */
    /*  Threshold level */
    h[i] = I;
  }

  emxInit_real_T(&b_i, 1, &e_emlrtRTEI, TRUE);

  /*  Hangover count */
  /* n=0; % Number of samples read  */
  /*  Sum of absolute samples */
  /*  Squared sum of samples */
  p = 0.0;

  /*  Intermediate quantities */
  q = 0.0;

  /*  Envelope */
  /* max_sample=0; % Max absolute value found */
  /* maxP=0; % Most positive value */
  /* maxN=0; % Most negative value */
  /* DClevel=0; % Average level  */
  /* ActiveityFactor=0; % Activity factor */
  ActiveSpeechLevel = -100.0;
  emlrtPushRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  b_abs(x, b_i);
  sum(b_i);
  emlrtPopRtStackR2012b(&d_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  power(x, b_i);
  sq = sum(b_i);
  emlrtPopRtStackR2012b(&e_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  if (x->size[0] < 1) {
    ixstart = 0;
  } else {
    ixstart = (int32_T)muDoubleScalarFloor(((real_T)x->size[0] - 1.0) + 0.5);
    i = (ixstart - x->size[0]) + 1;
    absb = x->size[0];
    if (muDoubleScalarAbs(i) < 4.4408920985006262E-16 * (real_T)absb) {
      ixstart++;
    } else if (i > 0) {
    } else {
      ixstart++;
    }
  }

  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  if ((ixstart > 0) && (ixstart > 1)) {
    emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&f_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  if (x->size[0] < 1) {
    absb = -1;
    apnd = 0;
  } else {
    ixstart = (int32_T)muDoubleScalarFloor(((real_T)x->size[0] - 1.0) + 0.5);
    apnd = ixstart + 1;
    i = (ixstart - x->size[0]) + 1;
    absb = x->size[0];
    if (muDoubleScalarAbs(i) < 4.4408920985006262E-16 * (real_T)absb) {
      ixstart++;
      apnd = x->size[0];
    } else if (i > 0) {
      apnd = ixstart;
    } else {
      ixstart++;
    }

    absb = ixstart - 1;
  }

  b_emxInit_real_T(&c_y, 2, &b_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&bb_emlrtRSI, emlrtRootTLSGlobal);
  i1 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = absb + 1;
  emxEnsureCapacity((emxArray__common *)c_y, i1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  if (absb + 1 > 0) {
    c_y->data[0] = 1.0;
    if (absb + 1 > 1) {
      c_y->data[absb] = apnd;
      i1 = absb + (absb < 0);
      if (i1 >= 0) {
        ixstart = (int32_T)((uint32_T)i1 >> 1);
      } else {
        ixstart = ~(int32_T)((uint32_T)~i1 >> 1);
      }

      emlrtPushRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&cb_emlrtRSI, emlrtRootTLSGlobal);
      for (i = 1; i < ixstart; i++) {
        c_y->data[i] = 1.0 + (real_T)i;
        c_y->data[absb - i] = apnd - i;
      }

      if (ixstart << 1 == absb) {
        c_y->data[ixstart] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        c_y->data[ixstart] = 1.0 + (real_T)ixstart;
        c_y->data[ixstart + 1] = apnd - ixstart;
      }
    }
  }

  emlrtPopRtStackR2012b(&ab_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&y_emlrtRSI, emlrtRootTLSGlobal);
  i1 = b_i->size[0];
  b_i->size[0] = c_y->size[1];
  emxEnsureCapacity((emxArray__common *)b_i, i1, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  ixstart = c_y->size[1];
  for (i1 = 0; i1 < ixstart; i1++) {
    b_i->data[i1] = sq / c_y->data[i1] + 1.0E-20;
  }

  emxFree_real_T(&c_y);
  for (i = 0; i < b_i->size[0]; i++) {
    if (b_i->data[i] < 0.0) {
      emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
      eml_error();
      emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
    }
  }

  emlrtPopRtStackR2012b(&g_emlrtRSI, emlrtRootTLSGlobal);
  i = 0;
  while (i <= x->size[0] - 1) {
    i1 = x->size[0];
    ixstart = (int32_T)(1.0 + (real_T)i);
    emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i1, &emlrtBCI,
      emlrtRootTLSGlobal);
    p = g * p + (1.0 - g) * muDoubleScalarAbs(x->data[i]);
    q = g * q + (1.0 - g) * p;
    for (ixstart = 0; ixstart < 15; ixstart++) {
      midthr = a[ixstart];
      diff = h[ixstart];
      if (q >= c[ixstart]) {
        midthr = a[ixstart] + 1.0;
        diff = 0.0;
      } else {
        if (h[ixstart] < I) {
          midthr = a[ixstart] + 1.0;
          diff = h[ixstart] + 1.0;
        }
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
      h[ixstart] = diff;
      a[ixstart] = midthr;
    }

    i++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  for (i = 0; i < 15; i++) {
    h[i] = -100.0;
  }

  for (i = 0; i < 15; i++) {
    if (a[i] != 0.0) {
      emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
      g = sq / a[i];
      if (g < 0.0) {
        emlrtPushRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
        eml_error();
        emlrtPopRtStackR2012b(&eb_emlrtRSI, emlrtRootTLSGlobal);
      }

      h[i] = 10.0 * muDoubleScalarLog10(g);
      emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, emlrtRootTLSGlobal);
  }

  emxInit_int32_T(&ii, 1, &f_emlrtRTEI, TRUE);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  i = 0;
  i1 = ii->size[0];
  ii->size[0] = 15;
  emxEnsureCapacity((emxArray__common *)ii, i1, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  ixstart = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ixstart < 16)) {
    guard1 = FALSE;
    if (h[ixstart - 1] - CdB[ixstart - 1] <= 15.9) {
      i++;
      ii->data[i - 1] = ixstart;
      if (i >= 15) {
        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      ixstart++;
    }
  }

  if (1 > i) {
    ixstart = 0;
  } else {
    ixstart = i;
  }

  emxInit_int32_T(&b_ii, 1, &b_emlrtRTEI, TRUE);
  i1 = b_ii->size[0];
  b_ii->size[0] = ixstart;
  emxEnsureCapacity((emxArray__common *)b_ii, i1, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  for (i1 = 0; i1 < ixstart; i1++) {
    b_ii->data[i1] = ii->data[i1];
  }

  i1 = ii->size[0];
  ii->size[0] = b_ii->size[0];
  emxEnsureCapacity((emxArray__common *)ii, i1, (int32_T)sizeof(int32_T),
                    &b_emlrtRTEI);
  ixstart = b_ii->size[0];
  for (i1 = 0; i1 < ixstart; i1++) {
    ii->data[i1] = b_ii->data[i1];
  }

  emxFree_int32_T(&b_ii);
  emlrtPopRtStackR2012b(&fb_emlrtRSI, emlrtRootTLSGlobal);
  i1 = b_i->size[0];
  b_i->size[0] = ii->size[0];
  emxEnsureCapacity((emxArray__common *)b_i, i1, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  ixstart = ii->size[0];
  for (i1 = 0; i1 < ixstart; i1++) {
    b_i->data[i1] = ii->data[i1];
  }

  emxFree_int32_T(&ii);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  if ((b_i->size[0] == 0) == 0) {
    i1 = b_i->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i1, &b_emlrtBCI, emlrtRootTLSGlobal);
    if (b_i->data[0] > 1.0) {
      i1 = (int32_T)(b_i->data[0] - 1.0);
      emlrtDynamicBoundsCheckFastR2012b(i1, 1, 15, &c_emlrtBCI,
        emlrtRootTLSGlobal);
      g = CdB[(int32_T)b_i->data[0] - 1];
      i1 = (int32_T)b_i->data[0] - 1;
      I = CdB[emlrtDynamicBoundsCheckFastR2012b(i1, 1, 15, &d_emlrtBCI,
        emlrtRootTLSGlobal) - 1];
      p = 0.1;
      q = 1.0;
      if (muDoubleScalarAbs((h[(int32_T)b_i->data[0] - 1] - g) - 15.9) < 0.1) {
        ActiveSpeechLevel = h[(int32_T)b_i->data[0] - 1];
      } else if (muDoubleScalarAbs((h[(int32_T)b_i->data[0] - 2] - I) - 15.9) <
                 0.1) {
        ActiveSpeechLevel = h[(int32_T)b_i->data[0] - 2];
      } else {
        ActiveSpeechLevel = (h[(int32_T)b_i->data[0] - 1] + h[(int32_T)b_i->
                             data[0] - 2]) / 2.0;
        midthr = (g + I) / 2.0;
        diff = (ActiveSpeechLevel - midthr) - 15.9;
        while (muDoubleScalarAbs(diff) > p) {
          q++;
          if (q > 20.0) {
            p *= 1.1;
          }

          if (diff > p) {
            ActiveSpeechLevel = (h[(int32_T)b_i->data[0] - 1] +
                                 ActiveSpeechLevel) / 2.0;
            midthr = (g + midthr) / 2.0;
          } else {
            if (diff < -p) {
              ActiveSpeechLevel = (h[(int32_T)b_i->data[0] - 2] +
                                   ActiveSpeechLevel) / 2.0;
              midthr = (I + midthr) / 2.0;
            }
          }

          diff = (ActiveSpeechLevel - midthr) - 15.9;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar,
            emlrtRootTLSGlobal);
        }
      }
    } else {
      ActiveSpeechLevel = h[(int32_T)b_i->data[0] - 1];
    }
  }

  emxFree_real_T(&b_i);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  return ActiveSpeechLevel;
}

/* End of code generation (asl_meter.c) */
