#include <R.h>
#include <math.h>
#include <Rinternals.h>

SEXP ricker(SEXP n, SEXP theta, SEXP e, SEXP burn_in, SEXP n_t, SEXP n_reps, SEXP n0) {

  int i,j;
  double log_r, sig_e, x;
  double *th_i;

  th_i = REAL( th_i );
  log_r = th_i[0];
  sig_e = th_i[1];
  /* following iterates the Ricker map on log populations */
    for (j=0; j < *n_reps; j++) {
      for (x= *n0,i=0;i< *burn_in;i++,e++) x += log_r - exp(x) + *e * sig_e;
      for (i=0;i<*n_t;i++,e++,n++) { x += log_r - exp(x) + *e * sig_e; *n = x; }
    }
    
    
} /* end of Ricker */
