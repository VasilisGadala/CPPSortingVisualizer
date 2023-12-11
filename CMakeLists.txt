cmake_minimum_required(VERSION 3.25)
project(CPPSortingVisualizer)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPPSortingVisualizer main.cpp
        lib/includes/Sorter.h
        lib/includes/element.h
        lib/includes/sortImplementations/BubbleSort.h
        lib/includes/Runner.h
        lib/includes/sortImplementations/SelectionSort.h
        lib/src/prebuiltSorters/IntegerSorter.cpp
        lib/includes/prebuiltSorters/IntegerSorter.h
        lib/src/prebuiltSorters/LexicographicSorter.cpp
        lib/includes/prebuiltSorters/LexicographicSorter.h

)
