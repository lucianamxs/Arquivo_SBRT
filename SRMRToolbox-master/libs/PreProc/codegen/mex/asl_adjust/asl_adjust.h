/*
 * asl_adjust.h
 *
 * Code generation for function 'asl_adjust'
 *
 * C source code generated on: Tue Aug  4 10:39:14 2015
 *
 */

#ifndef __ASL_ADJUST_H__
#define __ASL_ADJUST_H__
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
extern void asl_adjust(const emxArray_real_T *sam, real_T fs, real_T asl, emxArray_real_T *sam_out);
#endif
/* End of code generation (asl_adjust.h) */
