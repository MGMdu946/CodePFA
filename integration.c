#define INTEGRATION_C
  6
  7 #include "integration.h"
  8
  9 bool setQuadFormula(QuadFormula* qf, char* name)
 10 {
 11 »·······if (name == "right" || name == "left" || name == "middle" || name == "trapezes" || name == "si    mpson" || name == "gauss2" || name == "gauss3")
 12 »·······{
 13 »·······»·······return true;
 14 »·······}
 15 »·······return false;
 16 }
 17
 18 /* This function is not required ,but it may useful to debug */
 19 void printQuadFormula(QuadFormula* qf)
 20 {
 21 »·······
 22   printf("Quadratic formula: %s\n", qf->name);
 23   /* Print everything else that may be useful */
 24 }
 25
 26
 27 /* Approximate the integral of function f from a to b.
 28    - f is a pointer to a function pointer
 29    - a and b are the integration bounds
 30    - Interval [a,b] is split in N subdivisions [ai,bi]
 31    - Integral of f on each subdivision [ai,bi] is approximated by the quadrature formula qf.
 32 */
 33 double integrate(double (*f)(double), double a, double b, int N, QuadFormula* qf)
 34 {
 35   return 0.0;
 36 }
 37
 38 double integrate_dx(double (*f)(double), double a, double b, double dx, QuadFormula* qf)
 39 {
 40   return 0.0;
 41 }
