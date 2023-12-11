
#include "../../includes/prebuiltSorters/LexicographicSorter.h"


void LexicographicSorter::step() {
    this->s.step();
}

std::vector<Element<std::string>> LexicographicSorter::getElements() {
    return this->s.getElements();
}
