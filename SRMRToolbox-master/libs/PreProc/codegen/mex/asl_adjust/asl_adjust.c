/*
 * asl_adjust.c
 *
 * Code generation for function 'asl_adjust'
 *
 * C source code generated on: Tue Aug  4 10:39:14 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "asl_adjust.h"
#include "asl_adjust_emxutil.h"
#include "asl_meter.h"
#include "asl_adjust_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 7, "asl_adjust",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_adjust.m"
};

static emlrtRSInfo b_emlrtRSI = { 8, "asl_adjust",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_adjust.m"
};

static emlrtRSInfo hb_emlrtRSI = { 37, "mpower",
  "/usr/local/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/mpower.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 18, "asl_adjust",
  "/home/rafael/Documentos/MATLAB/SRMRToolbox-master/libs/PreProc/asl_adjust.m"
};

/* Function Definitions */
void asl_adjust(const emxArray_real_T *sam, real_T fs, real_T asl,
                emxArray_real_T *sam_out)
{
  emxArray_real_T *b_sam;
  int32_T i0;
  int32_T loop_ub;
  real_T sam_asl;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_real_T(&b_sam, 1, &emlrtRTEI, TRUE);

  /*  sam_out=asl_adjust(sam,fs,asl) */
  /*  sam: input vector */
  /*  fs: sampling frequency */
  /*  asl: target ASL value, e.g., -26  */
  emlrtPushRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  i0 = b_sam->size[0];
  b_sam->size[0] = sam->size[0];
  emxEnsureCapacity((emxArray__common *)b_sam, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = sam->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_sam->data[i0] = sam->data[i0];
  }

  sam_asl = asl_meter(b_sam, fs);
  emlrtPopRtStackR2012b(&emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  sam_asl = muDoubleScalarPower(10.0, (sam_asl - asl) / 20.0);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hb_emlrtRSI, emlrtRootTLSGlobal);
  i0 = sam_out->size[0];
  sam_out->size[0] = sam->size[0];
  emxEnsureCapacity((emxArray__common *)sam_out, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = sam->size[0];
  emxFree_real_T(&b_sam);
  for (i0 = 0; i0 < loop_ub; i0++) {
    sam_out->data[i0] = sam->data[i0] / sam_asl;
  }

  emlrtPopRtStackR2012b(&b_emlrtRSI, emlrtRootTLSGlobal);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (asl_adjust.c) */
