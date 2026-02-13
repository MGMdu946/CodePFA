 8
  9 bool setQuadFormula(QuadFormula* qf, char* name)
 10 {
 11 »·······if (name == "right" || name == "left" || name == "middle" || name == "trapezes" || name == "si    mpson" || name == "gauss2" || name == "gauss3")
 12 »·······{
 13 »·······»·······return integrate(double (*f)(double), double a, double b, int N, QuadFormula* qf);
 14 »·······}
 15 »·······return false;
 16 }
 17
 18 /* This function is not required ,but it may useful to debug */
 19 void printQuadFormula(QuadFormula* qf)
 20 {
 21 »·······if (name == "right" || name == "left" || name == "middle" || name == "trapezes")
 22 »·······{
 23 »·······»·······qf =·
 24 »·······»·······printf("Quadratic formula: %s\n", qf->name);
 25 »·······}
 26 »·······if (name == "left")
 27 »·······{
 28 »·······»·······struct QuaFormula = {.n = 0};
 29 »·······}
 30 »·······if (name == "middle")
 31 »·······{
 32 »······· struct QuaFormula = {.n = 0};
 33 »·······}
 34 »·······if (name == "trapezes")
 35 »·······{
 36 »······· struct QuaFormula = {.n = 1};
 37 »·······}
 38   printf("Quadratic formula: %s\n", qf->name);
 39   /* Print everything else that may be useful */
 40 }
 41
 42
 43 /* Approximate the integral of function f from a to b.
 44    - f is a pointer to a function pointer
 45    - a and b are the integration bounds
 46    - Interval [a,b] is split in N subdivisions [ai,bi]
 47    - Integral of f on each subdivision [ai,bi] is approximated by the quadrature formula qf.
 48 */
 49 double integrate(double (*f)(double), double a, double b, int N, QuadFormula* qf)
 50 {
 51   if (name == "left" || name == "right" || name == "middle")
 52   {
 53 »·······  struct QuaFormula l = {.n = 0, .wk = 1};
 54 }
 55
 56 double integrate_dx(double (*f)(double), double a, double b, double dx, QuadFormula* qf)
 57 {
 58   return 0.0;
 59 }
