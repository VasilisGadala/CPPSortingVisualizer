#include "../../includes/prebuiltSorters/IntegerSorter.h"

void IntegerSorter::step() {
    this->s.step();
}

std::vector<Element<int>> IntegerSorter::getElements() {
    return this->s.getElements();
}
