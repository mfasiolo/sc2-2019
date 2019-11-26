---
title: Reproducible research
weight: 1
---

> A big computer, a complex algorithm and a long time does not equal science.
>
> -- Robert Gentleman. SSC 2003, Halifax.

Reproducible research refers to being able to reproduce the analysis and conclusions of a particular investigation given the same raw data. When the analysis requires significant computation, this requires being able to recreate the same computational environment and run the same code on the data.

It may be surprising that a lot of science involving computation is *not* reproducible. Indeed, the scientific method largely revolves around explaining precisely how conclusions are drawn from experiments, so that they can be verified, modified or refuted in subsequent investigations. In practice, relatively few scientific articles provide enough information to recreate the program used to analyze the raw data, and fewer still make it possible to do this without months of person-effort. In some cases, even the researchers who conducted the analysis would be unable to reproduce the analysis.

How is this possible? One reason is that it has historically been difficult to produce code that is easy to run on many different computer systems. A second is that computational research in many areas is interactive and the various steps performed to acquire data, clean, prepare and analyze it, interpret the results and produce visualizations are not logged in their entirety.

Neither of these historical reasons is very compelling today. For the first, the vast majority of data analyses are performed using a high-level programming language whose programs can be run on multiple systems, and which have package management features that allow a snapshot of the relevant properties of the computational environment to be recorded. The code can easily be made available on the Internet. The second reason is probably even more disappointing than the first: most scientists would agree that not knowing how the analysis was performed is very problematic. Flexibility on this is likely a result of the recognition that computational research is difficult, especially when researchers do not have the computing expertise required to automate their analysis workflow.

One good reason that research may be impossible to reproduce is if the data cannot be shared. However, in most cases this would not prevent the code used to analyze the data being available.

Reproducible research is one part of a response to the [replication crisis](https://en.wikipedia.org/wiki/Replication_crisis). Being able to reproduce an analysis is useful in its own right, and also often makes it easy to perform the same analysis on different data. This makes it feasible for other people to try to replicate or generalize any findings.

One major advantage of reproducible research is that programs for analyzing data are more open. This helps people identify potential statistical issues or programming bugs. Many interesting proposals can then be entertained, e.g. the submission of [registered reports](https://en.wikipedia.org/wiki/Registered_report): an experiment and its analysis can be accepted for publication before the data is actually collected.  
