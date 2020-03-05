/*
 * vad_s_terminate.c
 *
 * Code generation for function 'vad_s_terminate'
 *
 * C source code generated on: Tue Aug  4 10:39:12 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "vad_s.h"
#include "vad_s_terminate.h"

/* Function Definitions */
void vad_s_atexit(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void vad_s_terminate(void)
{
  emlrtLeaveRtStackR2012b(emlrtRootTLSGlobal);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (vad_s_terminate.c) */
