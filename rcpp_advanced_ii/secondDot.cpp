#include <RcppArmadillo.h>

#include <mypack.h>

using namespace Rcpp;

// [[Rcpp::export(secondDot)]]
arma::vec secondDot_I(arma::vec x1, arma::vec x2)
{
  arma::vec out(1);
  
  out = mypack::dotArma2(x1, x2);

  return out;
}