---
title: Advanced Rcpp II
weight: 3
---

<style>
body {
text-align: justify}
</style>

This chapter explains how to structure larger `R`/`C++` projects. In particular, we start by explaining how `C++` code divided into several files can be compiled and loaded using `Rcpp::sourceCpp`. For larger projects, and especially projects that must be shared with other people, this way of working is not ideal and building an `R` package containing your `R` and `C++` code is much preferable. Hence, the bulk of this chapter is dedicated to explaining how to: 

   - use `Rcpp` to build `R` packages that contain `C++` code;
   - use `C++` code from other packages;
   - make `C++` code available to other packages.

The chapter consists of the following sections:

