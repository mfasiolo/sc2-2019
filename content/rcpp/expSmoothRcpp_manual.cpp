#include <Rcpp.h>
using namespace Rcpp;

RcppExport SEXP expSmoothRcpp_manual(SEXP ySEXP, SEXP aSEXP)
{
  const NumericVector y = as<const NumericVector>(ySEXP);
  const double a = as<const double>(aSEXP);
  
  int ni = y.size();
  NumericVector ys(ni);
  
  ys[0] = y[0];
  for(int i = 1; i < ni; i++){
    ys[i] = a * ys[i-1] + (1 - a) * y[i];
  }
  
  return ys;
}