/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Tue Aug  4 10:39:12 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "vad_s.h"
#include "power.h"
#include "vad_s_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo c_emlrtRSI = { 42, "power",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRTEInfo g_emlrtRTEI = { 15, 9, "eml_scalexp_alloc",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m" };

/* Function Definitions */
void power(const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  emlrtPushRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }

  emlrtPopRtStackR2012b(&c_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (power.c) */
