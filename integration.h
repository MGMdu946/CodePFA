/* Header file integration.h         */
  3 /* Creation date: 31 July, 2025      */····································
  4 /*************************************/
  5
  6 #include <stdbool.h>
  7 #include <stdio.h>
  8 #include <stdlib.h>
  9 #include <math.h>
 10 #include <string.h>
 11 #include <stddef.h>
 12
 13 #ifndef INTEGRATION_H
 14 #define INTEGRATION_H
 15
 16 /* Represents a quadrature formula.
 17    The function integrate takes an argument of type QuadFormula *.
 18    Have everything in this structure that will be needed by the function integrate.
 19 */
 20 typedef struct{
 21   char name[20]; /* Name of the quadrature formula. */
 22                  /* (possible value: "left", "right", "middle", "trapezes", "simpson", "gauss2" or "ga    uss3") */
 23   /* Add here other paramaters to the structure definition, that you may need for the integral functio    n */
 24
 25   int n;
 26   double* wk;
 27   double* xk;
 28 ··
 29 } QuadFormula;
 30
 31 #ifdef INTEGRATION_C
 32
 33 #else /* INTEGRATION_C */
 34
 35 /* Declaration of the functions that you have to code */
 36
 37 extern bool setQuadFormula(QuadFormula* qf, char* name);
 38 extern void printQuadFormula(QuadFormula* qf); /* Not required but useful for debugging */
 39
 40 /* Returns the integral of function f from a to b. The approximation is done by splitting
 41    the interval [a,b] in N subdivisions, and then using the quadrature formula defined by qf */
 42 extern double integrate(double (*f)(double), double a, double b, int N, QuadFormula* qf);
 43
 44 /* Same as function integrate, except that the number N of subdivision is computed using the
 45    argument dx: we take N = |b-a|/dx (rounded to be an integer) */
 46 extern double integrate_dx(double (*f)(double), double a, double b, double dx, QuadFormula* qf);
 47
 48 #endif /* INTEGRATION_C */
 49
 50 #endif /* INTEGRATION_H */
