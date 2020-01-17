#include <Rcpp.h>
using namespace Rcpp;

RcppExport SEXP rnorm_manual(SEXP n) {
  
  NumericVector out( as<int>(n) );
  
  RNGScope rngScope;
  
  out = rnorm(as<int>(n), 0.0, 1.0);
  
  return out;
}