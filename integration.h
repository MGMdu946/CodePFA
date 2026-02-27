
/*************************************/
/* Header file integration.h         */
/* Creation date: 31 July, 2025      */
/*************************************/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stddef.h>

#ifndef INTEGRATION_H
#define INTEGRATION_H

/* Represents a quadrature formula.
   The function integrate takes an argument of type QuadFormula *.
   Have everything in this structure that will be needed by the function integrate.
*/
typedef struct{
  char name[20]; /* Name of the quadrature formula. */
                 /* (possible value: "left", "right", "middle", "trapezes", "simpson", "gauss2" or "gauss3") */
  /* Add here other paramaters to the structure definition, that you may need for the integral function */

  int n;
  double w[3];
  double x[3];

} QuadFormula;

#ifdef INTEGRATION_C

#else /* INTEGRATION_C */

/* Declaration of the functions that you have to code */

extern bool setQuadFormula(QuadFormula* qf, char* name);
extern void printQuadFormula(QuadFormula* qf); /* Not required but useful for debugging */

/* Returns the integral of function f from a to b. The approximation is done by splitting
   the interval [a,b] in N subdivisions, and then using the quadrature formula defined by qf */
extern double integrate(double (*f)(double), double a, double b, int N, QuadFormula* qf);

/* Same as function integrate, except that the number N of subdivision is computed using the
   argument dx: we take N = |b-a|/dx (rounded to be an integer) */
extern double integrate_dx(double (*f)(double), double a, double b, double dx, QuadFormula* qf);

#endif /* INTEGRATION_C */

#endif /* INTEGRATION_H */
