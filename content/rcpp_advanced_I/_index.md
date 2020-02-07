---
title: Advanced Rcpp I
---

<style>
body {
text-align: justify}
</style>

In the previous chapter we have seen how `R` can be easily interfaced with `C++` via the `Rcpp` package. Here we will explore the capabilities of `Rcpp` more in details. In particular, we will show how `Rcpp sugar` allows us to write `C++` code that looks like `R` code, but that is often much faster. We will then consider the `RcppArmadillo` package, which is an interface to the `Armadillo` `C++` linear algebra library, and we will demostrate that it can lead to superior performance, relative to base `R`, in the context of statistical computing.   

The chapter consists of the following sections:
