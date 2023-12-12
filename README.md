# CS3520 - Sorting Visualizer

Developer Name: William Gadala

## Project Overview

This project is a sorting visualizer in CPP. Currently, it supports sorting of any generic types that provide implementations
for the comparison operators, and it can sort using Bubble Sort and Selection Sort. To extend functionality to a new
sorter, one must provide a step() function, which steps once in the sorting process and returns whether it has completed.

The program uses the Catch2 testing framework and Boost to ensure that a user can easily test whether their new
sorting algorithm is properly sorting its respective elements. It is the user's job to make sure each step
provides proper output, as the program cannot determine the accuracy of the steps for arbitrary sorting algorithms

## How to Run the Program

Install Boost For Your Respective System https://github.com/catchorg/Catch2

Install Catch2 For Your Respective System https://www.boost.org/

CMakeLists.txt is set up to compile the project from main. Update main to change the sorting method,
list to sort, etc. (if desired) and use cmake to run the program. 

To run the test suite, compile with ```g++ -o tests test/projectTest.cpp```
