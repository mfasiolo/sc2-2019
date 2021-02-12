// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

// [[Rcpp::interfaces(cpp)]]

using namespace Rcpp;

// [[Rcpp::export(dotArma2)]]
arma::vec dotArma_I2(arma::vec x1, arma::vec x2)
{
  arma::vec out(1);
  out[0] = arma::as_scalar(x1.t() * x2);
  return out;
}