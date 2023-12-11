#ifndef CPPSORTINGVISUALIZER_LEXICOGRAPHICSORTER_H
#define CPPSORTINGVISUALIZER_LEXICOGRAPHICSORTER_H


#include <string>
#include "../Sorter.h"

class LexicographicSorter {
private:
    Sorter<std::string>& s;
public:
    explicit LexicographicSorter(Sorter<std::string>& s) : s(s) {};
    void step();
    std::vector<Element<std::string>> getElements();
};


#endif //CPPSORTINGVISUALIZER_LEXICOGRAPHICSORTER_H
