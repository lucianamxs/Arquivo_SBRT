/*
 * rt_nonfinite.h
 *
 * Code generation for function 'asl_adjust'
 *
 * C source code generated on: Tue Aug  4 10:39:14 2015
 *
 */

#ifndef __RT_NONFINITE_H__
#define __RT_NONFINITE_H__
#define rtInf      	mxGetInf()
#define rtMinusInf 	(-mxGetInf())
#define rtNaN      	mxGetNaN()
#define rtIsNaN(X) 	mxIsNaN(X)
#define rtIsInf(X) 	mxIsInf(X)
#define rtIsNaNF(X)	mxIsNaN(X)
#define rtIsInfF(X)	mxIsInf(X)
#endif
/* End of code generation (rt_nonfinite.h) */
