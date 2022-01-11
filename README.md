[![Build Status](https://github.com/mfasiolo/sc2-2019/workflows/build/badge.svg)](https://github.com/mfasiolo/sc2-2019/actions)

# Statistical Computing 2 Website

This is the source code for generating the [Statistical Computing 2 website](https://mfasiolo.github.io/sc2-2019/).

To build the site locally, open the `sc2-2019` project in RStudio and run

```
blogdown::serve_site()
```

You may need to install several packages to build the site the first time. You can view the site using a web browser, by pointing it to the local address generated by the command above. Usually this is something like http://127.0.0.1:4321/sc2-2019/

When served locally, the site will be rebuilt every time a file is saved, so you do not need to rebuild it constantly.

