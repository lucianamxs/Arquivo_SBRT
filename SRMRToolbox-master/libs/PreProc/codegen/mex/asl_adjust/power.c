/*
 * power.c
 *
 * Code generation for function 'power'
 *
 * C source code generated on: Tue Aug  4 10:39:14 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "asl_adjust.h"
#include "power.h"
#include "asl_adjust_emxutil.h"
#include "asl_adjust_data.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 15, 9, "eml_scalexp_alloc",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m" };

/* Function Definitions */
void power(const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  unnamed_idx_0 = (uint32_T)a->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  for (k = 0; k < (int32_T)unnamed_idx_0; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (power.c) */
