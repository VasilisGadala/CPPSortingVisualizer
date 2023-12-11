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


## Notes to TAs

Looking back at my implementation, one change I would make design wise is the return type of the move function.
Currently it returns a boolean to indicate whether it moved, but I wish I made an object called Point and I made it return
a point to move to after "bouncing", and have a separate function that checks if that space is occupied and handles it accordingly.
This way my implementation of the DoodleBug would just need to override the extra function, rather than the current implementation
which has to rewrite the move functionality, as it wants to handle the case differently
if there is an empty space, ant, or doodlebug.

Also I tried to follow some good encapsulation practices, but I can make some further improvements depending on how this program would be used.
I.e. perhaps the ants and doodlebugs lists should be private and I should write alternate functions to access them while enforcing rules.
For now the use cases are pretty low-risk because you basically just call move and it makes most of the choices for the user,
but if some other programmer wanted to add a new bug with new movement it would be best to support more extensive encapsulation

Also currently submitting on Tuesday a week late b/c I was sick the previous week & got an extension.
If Professor Fontenot is reviewing this, thank you again! 