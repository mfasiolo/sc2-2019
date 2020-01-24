
#include <Rcpp.h>
#include "utilities.h"

using namespace Rcpp;

// [[Rcpp::export(name = "squareVect")]]
NumericVector squareVect_I(NumericVector v) {
  
  NumericVector out( v.length() );
  for(int ii = 0; ii < v.length(); ii++){
    out[ii] = mySquare(v[ii]);
  }
  return out;
  
}