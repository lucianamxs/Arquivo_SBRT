/*
 * vad_s_initialize.c
 *
 * Code generation for function 'vad_s_initialize'
 *
 * C source code generated on: Tue Aug  4 10:39:12 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "vad_s.h"
#include "vad_s_initialize.h"
#include "vad_s_data.h"

/* Function Definitions */
void vad_s_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (vad_s_initialize.c) */
