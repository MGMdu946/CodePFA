/*************************************/
/* Header file pfa.h         */
/* Creation date: 31 July, 2025      */
/*************************************/

#include <stdbool.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stddef.h>

#include "integration.h"

#ifndef PFA_H
#define PFA_H

typedef enum {CALL=0, PUT} OptionType;

/* Don't change this type. The function priceOption takes an argument of type Option *.   */
typedef struct{
  OptionType type; /* Call or put option */
  double S0; /* Price of the underlying asset at time 0 */
  double K; /* Strike of the option (prix d'exercice) */
  double T; /* Expiry */

  /* Parameters of the distribution of random variable S_T (price of the underlying asset at time T) */
  double mu;
  double sig;
} Option;


/* Don't change this type. The functions about insurance take an argument of type InsuredClient *.  */
typedef struct{
  /* m and s are the parameters of the log-normal distribution of random variables X1 and X2
     (the reimbursements at each claim) */
  double m;
  double s;

  /* An array of 3 elements. p[0], p[1] and p[2] are the probabilities that the client has
     0, 1 or 2 claims during the year. */
  double* p;
} InsuredClient;

#ifdef PFA_C

/* Global variables (only visible in pfa.c) for the integration computations */
QuadFormula pfaQF;
double pfa_dt;

#else
/* Initialize the integration variables.
   Arguments :
   - quadrature : name of the quadrature formula that will be used. It can be "left", "right",
     "middle", "trapezes", "simpson", "gauss2" or "gauss3".
   - dt : a positive value, which will be used to decide the number of subdivisions of an
          interval [a,b], when computing the integration.
          The number of subdivisions will be N such that (b-a)/N ~ dt

   This functions sets the global variables pfaQF and pfa_dt to the values that you will use.
*/
extern bool init_integration(char* quadrature, double dt);

/* Normal distribution : density (phi) and cumulative distribution function (PHI) */
extern double phi(double x);
extern double PHI(double x);

/* Finance function */
extern double optionPrice(Option* opt);

/* Insurance functions */
extern double clientPDF_X(InsuredClient* client, double x);
extern double clientCDF_X(InsuredClient* client, double x);
extern double clientPDF_X1X2(InsuredClient* client, double x);
extern double clientCDF_X1X2(InsuredClient* client, double x);
extern double clientCDF_S(InsuredClient* client, double x);

#endif // PFA_C

#endif // PFA_H
