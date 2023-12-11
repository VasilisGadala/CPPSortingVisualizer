#ifndef CPPSORTINGVISUALIZER_RUNNER_H
#define CPPSORTINGVISUALIZER_RUNNER_H


#include "Sorter.h"

template<typename T>
class Runner {
private:
    Sorter<T>& s;
public:
    void run();
    explicit Runner(Sorter<T>& s) : s(s) {};

};

template<typename T>
void Runner<T>::run() {
    while (!s.step()) {
        for (int j = 0; j < s.getElements().size(); j += 1) {
            std::cout << s.getElements().at(j).getEntry() << " : " << s.getElements().at(j).getType() << ", ";
        }
        std::cout << std::endl;
    }
    for (int j = 0; j < s.getElements().size(); j += 1) {
        std::cout << s.getElements().at(j).getEntry() << " : " << s.getElements().at(j).getType() << ", ";
    }
    std::cout << std::endl;
}


#endif //CPPSORTINGVISUALIZER_RUNNER_H
