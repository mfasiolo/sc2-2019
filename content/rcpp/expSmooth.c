#include <R.h>
#include <Rinternals.h>

SEXP expSmooth(SEXP y, SEXP ys, SEXP n, SEXP a)
{
  int ni;
  double *xy, *xys;
  double ai;
  
  xy = REAL(y); 
  xys = REAL(ys);
  ni = INTEGER(n)[0];
  ai = REAL(a)[0];

  xys[0] = xy[0];
  for(int i = 1; i < ni; i++){
    xys[i] = ai * xys[i-1] + (1 - ai) * xy[i];
  }
  
  return R_NilValue;
}
