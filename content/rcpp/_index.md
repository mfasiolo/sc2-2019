---
title: Interfacing R with C/C++
---

<style>
body {
text-align: justify}
</style>

In this chapter we will see how `R` can be interfaced with `C++` for speeding up statistical computations. In particular, we will explain how functions written in `C++` can be called from `R` via the `.Call` interface. We will then explain how the `Rcpp` package provides tools for seemlessly integrating `R` with `C++`, thus providing a better alternative to direct usage of `R`'s `C` `API`.  

The chapter consists of the following sections:
