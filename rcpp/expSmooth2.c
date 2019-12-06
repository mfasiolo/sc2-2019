#include <R.h>
#include <Rinternals.h>

SEXP expSmooth2(SEXP y, SEXP a)
{
  int ni;
  double *xy, *xys;
  double ai;
  SEXP ys;
  
  y = PROTECT(coerceVector(y, REALSXP));
  ni = length(y);
  ys = PROTECT(allocVector(REALSXP, ni));
  
  ai = REAL(a)[0];
  xy = REAL(y); 
  xys = REAL(ys);
  
  xys[0] = xy[0];
  
  for(int i = 1; i < ni; i++){
    xys[i] = ai * xys[i-1] + (1 - ai) * xy[i];
  }
  
  UNPROTECT(2);
  
  return ys;
}
