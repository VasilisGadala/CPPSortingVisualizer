#ifndef CPPSORTINGVISUALIZER_SELECTIONSORT_H
#define CPPSORTINGVISUALIZER_SELECTIONSORT_H


#include "../Sorter.h"

template<typename T>
class SelectionSort : public Sorter<T> {
protected:
    unsigned smallestIndex = 0;
    unsigned prevSmallestIndex = -1;
    unsigned innerStep = 1;
    unsigned outerStep = 0;
public:
    // Constructor
    using Sorter<T>::Sorter;

    // Override the step method
    bool step();
};

template<typename T>
bool SelectionSort<T>::step() {
    int size = this->getElements().size();

    if (prevSmallestIndex >= 0 && prevSmallestIndex < size) {
        this->elements[prevSmallestIndex].setType('0');
    }
    this->elements[smallestIndex].setType('1');

    if (outerStep < size) {
        if (innerStep < size) {
            this->elements[smallestIndex].setType('1');
            this->elements[innerStep].setType('1');
            if (innerStep - outerStep > 0 && innerStep - 1 != smallestIndex) {
                this->elements[innerStep - 1].setType('0');
            }
            if (this->getElements()[innerStep].getEntry() < this->getElements()[smallestIndex].getEntry()) {
                prevSmallestIndex = smallestIndex;
                smallestIndex = innerStep;
            }
            this->elements[innerStep].setType('1');
            innerStep++;
        } else {
            if (outerStep != smallestIndex) {
                std::swap(this->elements[outerStep], this->elements[smallestIndex]);
            }
            this->elements[innerStep - 1].setType('0');
            this->elements[outerStep].setType('2');
            smallestIndex = ++outerStep;
            innerStep = smallestIndex + 1;
            prevSmallestIndex = -1;
            if (outerStep == size) {
                return true;
            }
        }
    }
    return false;
}

#endif //CPPSORTINGVISUALIZER_SELECTIONSORT_H
