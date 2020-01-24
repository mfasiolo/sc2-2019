#include <Rcpp.h>

using namespace Rcpp;

//' Dot product in Rcpp.
//'
//' @param x1 numeric vector
//' @param x2 numeric vector
//' @return dot product, that is \code{t(x1)%*%x2}
// [[Rcpp::export(dotRcpp)]]
NumericVector dotRcpp_I(NumericVector x1, NumericVector x2)
{
  NumericVector out(1);
  out[0] = sum(x1 * x2);
  return out;
}