#ifndef CPPSORTINGVISUALIZER_INTEGERSORTER_H
#define CPPSORTINGVISUALIZER_INTEGERSORTER_H


#include "../Sorter.h"

class IntegerSorter {
private:
    Sorter<int>& s;
public:
    explicit IntegerSorter(Sorter<int>& s) : s(s) {};
    void step();
    std::vector<Element<int>> getElements();
};


#endif //CPPSORTINGVISUALIZER_INTEGERSORTER_H
