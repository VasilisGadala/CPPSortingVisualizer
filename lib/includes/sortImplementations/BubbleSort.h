#ifndef CPPSORTINGVISUALIZER_BUBBLESORT_H
#define CPPSORTINGVISUALIZER_BUBBLESORT_H

#include "../Sorter.h"

template<typename T>
class BubbleSort : public Sorter<T> {
protected:
    unsigned innerStep = 0;
    unsigned outerStep = 0;
public:
    // Constructor
    using Sorter<T>::Sorter;

    // Override the step method
    bool step();
};

template<typename T>
bool BubbleSort<T>::step() {
    int size = this->getElements().size();
    if (outerStep < size) {
        if (innerStep < size - outerStep - 1) {
            if (this->getElements()[innerStep].getEntry() > this->getElements()[innerStep + 1].getEntry()) {
                std::swap(this->elements[innerStep], this->elements[innerStep + 1]);

            }
            if (innerStep > 0) {
                this->elements[innerStep - 1].setType('0');
            }
            if (innerStep < size - 1) {
                this->elements[innerStep + 1].setType('1');
            }
            this->elements[innerStep].setType('1');
            ++innerStep;
        } else {
            this->elements[size - outerStep - 1].setType('2');
            if (size - outerStep - 1 > 0) {
                this->elements[size - outerStep - 2].setType('0');
            }
            innerStep = 0;
            if (++outerStep == size) {
                return true;
            }
        }
    }
    return false;
}

#endif //CPPSORTINGVISUALIZER_BUBBLESORT_H
