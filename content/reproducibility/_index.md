---
title: Reproducibility
weight: 1
---

Programming involves specifying an unambiguous sequence of instructions, i.e. a computer program, for a computer to execute. Most people with a reasonable amount of experience doing this can attest that it is quite hard to do, and it becomes even harder when programs become more complex.

There are several challenges involved with large programs.

1. There is often a lot of code: this must be managed in a sensible way, typically by splitting it into files with a logical structure, and then perhaps into modules or *packages* with a high-level interpretation.
1. Code typically changes over time: keeping track of changes is important. Modern *version control* software and platforms make it easy to do this, and also to enable collaboration on code by many people.
1. A very important aspect that is often overlooked by researchers is that it is important for *people* to be able to understand what the program does: documentation of code is very important, even if only one person ever reads it.

We will address all of these in this course.

In addition to these general challenges, there are further issues associated with code that is written in service of scientific investigation. Specifically, analyses done by a computer should ideally be **reproducible**. We will overview reproducible computational research, and introduce **literate programming** as one way to help produce it.
