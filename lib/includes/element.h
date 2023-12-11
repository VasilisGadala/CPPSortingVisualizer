#ifndef CPPSORTINGVISUALIZER_ELEMENT_H
#define CPPSORTINGVISUALIZER_ELEMENT_H


#include <iostream>
#include <string>

template<typename T>
class Element {
private:
    char type;
    T entry;

public:
    explicit Element(const T &elementEntry)
            : type('0'), entry(elementEntry) {}

    char getType() const {
        return type;
    }

    void setType(const char &elementType) {
        type = elementType;
    }

    T getEntry() const {
        return entry;
    }

    void setEntry(const T &elementEntry) {
        entry = elementEntry;
    }
};


#endif //CPPSORTINGVISUALIZER_ELEMENT_H
