
// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

using namespace Rcpp;

//' Dot product in RcppArmadillo.
//'
//' @param x1 numeric vector
//' @param x2 numeric vector
//' @return dot product, that is \code{t(x1)%*%x2}
// [[Rcpp::export(dotArma)]]
arma::vec dotArma_I(arma::vec x1, arma::vec x2)
{
  arma::vec out(1);
  out[0] = arma::as_scalar(x1.t() * x2);
  return out;
}