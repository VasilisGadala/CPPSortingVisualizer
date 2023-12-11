#ifndef CPPSORTINGVISUALIZER_SORTER_H
#define CPPSORTINGVISUALIZER_SORTER_H


#include <vector>
#include "element.h"

template<typename T>
class Sorter {
protected:
    std::vector<Element<T>> elements;
public:
    explicit Sorter(std::vector<T>& inputElements);
    virtual bool step() = 0;
    std::vector<Element<T>> getElements();
};


template<typename T>
std::vector<Element<T>> Sorter<T>::getElements() {
    return elements;
}



template<typename T>
Sorter<T>::Sorter(std::vector<T>& inputElements) {
    for (const T& element : inputElements) {
        elements.emplace_back(element);
    }
}



#endif //CPPSORTINGVISUALIZER_SORTER_H
