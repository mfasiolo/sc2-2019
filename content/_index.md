---
title: Home
---

<style>
body {
text-align: justify}
</style>  

# Statistical Computing 2

This website contains teaching materials for part of the second computing unit of the taught component of the [Computational Statistics and Data Science (COMPASS) PhD programme](https://www.bristol.ac.uk/cdt/compass/). The material for the second computing unit can be found [here](https://github.com/mfasiolo/sc2-2019).

The material provided here focusses on how `R` can be interfaced with `C++` via the `Rcpp` package. More specifically, we guide the students through the following steps:

  1. interfacing `R` with `C++` manually via `.Call()`;
  
  2. using the `Rcpp` package for easier/safer integration between `R` and `C++`;
  
  3. using `Rcpp sugar` for performing standard statistical operations in `C++`; 
  
  4. performing numerical linear algebra computation via the `RcppArmadillo` package;
  
  5. including `C++` code in an `R` package via `Rcpp`.
  
Some of the chapters contain programming exercises, focussed on exploiting the `Rcpp` family of packages to speed-up statistical computations.


References:

- Allaire, J.J., Eddelbuettel, D. and François, R., 2018. Rcpp Attributes. Vignette included in R package Rcpp, URL http://CRAN.R-Project.org/package=Rcpp.
- Chambers, J.M., 2017. Extending R. Chapman and Hall/CRC.
- Eddelbuettel, D., 2013. Seamless R and C++ integration with Rcpp. New York: Springer.
- Eddelbuettel, D. and Balamuta, J.J., 2018. Extending R with C++: A Brief Introduction to Rcpp. The American Statistician, 72(1), pp.28-36.
- Eddelbuettel, D. and François, R., 2010. Rcpp syntactic sugar.
- Eddelbuettel, D. and Sanderson, C., 2014. RcppArmadillo: Accelerating R with high-performance C++ linear algebra. Computational Statistics & Data Analysis, 71, pp.1054-1063.
- Matloff, N., 2015. Parallel computing for data science: with examples in R, C++ and CUDA. Chapman and Hall/CRC.
- Wickham, H., 2014. Advanced r. Chapman and Hall/CRC.