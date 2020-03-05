/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 * C source code generated on: Tue Aug  4 10:39:14 2015
 *
 */

#ifndef __SUM_H__
#define __SUM_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "asl_adjust_types.h"

/* Function Declarations */
extern void check_forloop_overflow_error(boolean_T overflow);
extern real_T sum(const emxArray_real_T *x);
#ifdef __WATCOMC__
#pragma aux sum value [8087];
#endif
#endif
/* End of code generation (sum.h) */
