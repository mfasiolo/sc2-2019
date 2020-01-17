#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export(name = "expSmoothRcpp")]]
NumericVector expSmoothRcpp_I(const NumericVector y, const double a)
{
  int ni = y.size();
  NumericVector ys(ni);
  
  ys[0] = y[0];
  for(int i = 1; i < ni; i++){
    ys[i] = a * ys[i-1] + (1 - a) * y[i];
  }
  
  return ys;
}