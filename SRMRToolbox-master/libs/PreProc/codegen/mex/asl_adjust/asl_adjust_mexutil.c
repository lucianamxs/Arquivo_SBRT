/*
 * asl_adjust_mexutil.c
 *
 * Code generation for function 'asl_adjust_mexutil'
 *
 * C source code generated on: Tue Aug  4 10:39:14 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "asl_adjust.h"
#include "asl_adjust_mexutil.h"

/* Function Definitions */
void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", TRUE,
                        location);
}

const mxArray *message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m5;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m5, 1, &pArray, "message",
    TRUE, location);
}

/* End of code generation (asl_adjust_mexutil.c) */
