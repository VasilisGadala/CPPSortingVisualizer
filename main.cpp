#include <iostream>
#include <vector>
#include "lib/includes/sortImplementations/BubbleSort.h"
#include "lib/includes/sortImplementations/SelectionSort.h"
#include "lib/includes/Runner.h"

int main() {
    std::vector<int> inputIntegers = {5, 2, 8, 1, 7};
    SelectionSort<int> sorterInstance(inputIntegers);
    BubbleSort<int> sorterInstance2(inputIntegers);
    Runner r(sorterInstance);
    r.run();
}