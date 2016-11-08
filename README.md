# CS510 CW 11

**Author(s):** _\<your name(s)\>_

[![Build Status](https://travis-ci.org/chapman-cs510-2016f/cw-11-YOURNAME.svg?branch=master)](https://travis-ci.org/chapman-cs510-2016f/cw-11-YOURNAME)

**Due date:** 2016/11/15

## Specification

**Note: Remember this is a C project.**

Complete the following exercises, saving your solutions in the indicated files. 

1. Recall the following references, which will still be useful throughout the rest of the course.
    * [Learn C in Y Minutes](https://learnxinyminutes.com/docs/c/)
    * [C Cheat Sheet](https://www.cheatography.com/ashlyn-black/cheat-sheets/c-reference/)
    * [C Programming Wikibook](https://en.wikibooks.org/wiki/C_Programming)
    * [Learn Make in Y Minutes](https://learnxinyminutes.com/docs/make/)
1. Examine the source code in ```src/matrix``` carefully. Finish coding the implementation.
    1. In a Jupyter notebook ```Matrix.ipynb```, describe how the ```MATRIX``` type is defined and how it works in detail. Explain in particular how the rows and columns of a multidimensional array are stored in C.
    1. Make sure that ```test_matrix``` in the ```test/``` folder compiles and runs correctly after you are finished implementing ```MATRIX```.

1. Examine the source code in ```src/arrays``` carefully. Compile and run it.
    1. In a Jupyter notebook ```Arrays.ipynb```, describe what ```arrays``` does in detail. Do the following.
    1. Change the type of "array" to an array of floats. Make sure the code compiles and runs.
    1. Change the type of "memblock" to a pointer to long double. Make sure the code compiles and runs.
    1. Refactor ```arrays.c``` to add two new functions: ```print_arrays``` and ```set_arrays```. Move the existing code from ```main``` into these new functions as appropriate, and call them from ```main```. You will have to think carefully about what types these new functions should be, and what arguments (if any) they should have, of what type(s). Make sure the code compiles and runs.
    1. In your notebook, explain what ```malloc``` and ```free``` do in detail.
1. Examine the source code in ```src/structs``` carefully. Compile and run it.
    1. In a Jupyter notebook ```Structs.ipynb```, describe what ```print_structs``` does in detail. Answer the following questions.
    1. Explain the difference between "pass by value" and "pass by reference" in your own words. Support your explanation with concrete examples from the program output.
    1. Explain the difference between ```v.x``` and ```v->x``` for a struct ```v``` with field ```x```.
1. Examine the existing test in ```test/``` carefully. Compile and run it.
    1. Add another test that reimplements the "pass by reference" test in ```src/structs```. Ensure that it passes.

## Assessment

Analyze in this section what you found useful about this assignment in your own words. Include any lingering questions or comments that you may have.

**CHANGEME**

## Honor Pledge

I pledge that all the work in this repository is my own with only the following exceptions:

* Content of starter files supplied by the instructor;
* Code borrowed from another source, documented with correct attribution in the code and summarized here.

Signed,

**YOURNAME**
