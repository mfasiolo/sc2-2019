---
title: Literate programming with LaTeX and LyX
weight: 4
---

It is straightforward to incorporate R code chunks in LaTeX using knitr.

For example, you can take the following code and paste it into a file with extension `.Rnw`. After doing so, you can open it with RStudio.

*Before* trying to compile the file (by clicking "Compile PDF"), first check in your global or project options that under the "Sweave" menu, "Weave Rnw files using:" is set to "knitr". Otherwise, Sweave will be used, which requires a few modifications to the input file.

Clicking "Compile PDF" will produce the PDF.

```
\documentclass{article}

\setlength{\parskip}{\medskipamount}
\setlength{\parindent}{0pt}

\title{A simple Rnoweb Document}
\author{Anthony Lee}
\date{}

\begin{document}

\maketitle

This mostly a normal \LaTeX document.

For exampole, you can use mathematics: for $i \in {1,\ldots,n}$,
\[ S_n = \sum_{i=1}^n X_i. \]

The difference is that you can insert R code chunks

<<chunk-name, fig.height=5>>=
xs <- seq(0,2*pi,0.01)
ys <- sin(xs)
plot(xs, ys, type="l")
@

\end{document}
```

You can also put R code chunks into LyX documents if they have activated the module "Rnw (knitr)". The syntax for code chunks is the same as for LaTeX documents, and is inserted using "Evil Red Text".
