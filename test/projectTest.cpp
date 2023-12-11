#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../lib/includes/sortImplementations/BubbleSort.h"
#include "../lib/includes/sortImplementations/SelectionSort.h"
#include <boost/range/algorithm.hpp>

bool compareLists(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> bubbleSort(std::vector<int> v) {
    BubbleSort<int> temp(v);
    for (int i = 0; i < v.size() * v.size(); i += 1) {
        temp.step();
    }
    std::vector<int> out;
    for (int i = 0; i < v.size(); i += 1) {
        out.emplace_back(temp.getElements()[i].getEntry());
    }
    return out;
}

std::vector<int> selectionSort(std::vector<int> v) {
    SelectionSort<int> temp(v);
    for (int i = 0; i < v.size() * v.size(); i += 1) {
        temp.step();
    }
    std::vector<int> out;
    for (int i = 0; i < v.size(); i += 1) {
        out.emplace_back(temp.getElements()[i].getEntry());
    }
    return out;
}

TEST_CASE("Custom Sort Tests") {
    // Empty Bubble Sort
    SECTION("Empty Vector") {
        std::vector<int> input;
        std::vector<int> expected = input;
        boost::range::sort(expected);

        REQUIRE(compareLists(bubbleSort(input), expected));
        REQUIRE(compareLists(selectionSort(input), expected));
    }

        // 1 Element Bubble Sort
    SECTION("Single Element Vector") {
        std::vector<int> input = {42};
        std::vector<int> expected = input;
        boost::range::sort(expected);

        REQUIRE(compareLists(bubbleSort(input), expected));
        REQUIRE(compareLists(selectionSort(input), expected));
    }

        // Even-sized Bubble Sort
    SECTION("Even-sized Vector") {
        std::vector<int> input = {5, 2, 8, 1};
        std::vector<int> expected = input;
        boost::range::sort(expected);

        REQUIRE(compareLists(bubbleSort(input), expected));
        REQUIRE(compareLists(selectionSort(input), expected));
    }

        // Odd-sized Bubble Sort
    SECTION("Odd-sized Vector") {
        std::vector<int> input = {5, 2, 8, 1, 7};
        std::vector<int> expected = input;
        boost::range::sort(expected);

        REQUIRE(compareLists(bubbleSort(input), expected));
        REQUIRE(compareLists(selectionSort(input), expected));
    }

        // Already sorted
    SECTION("Already Sorted Vector") {
        std::vector<int> input = {1, 2, 3, 4, 5};
        std::vector<int> expected = input;
        boost::range::sort(expected);

        REQUIRE(compareLists(bubbleSort(input), expected));
        REQUIRE(compareLists(selectionSort(input), expected));
    }

        // Reverse sorted
    SECTION("Reverse Sorted Vector") {
        std::vector<int> input = {5, 4, 3, 2, 1};
        std::vector<int> expected = input;
        boost::range::sort(expected);

        REQUIRE(compareLists(bubbleSort(input), expected));
        REQUIRE(compareLists(selectionSort(input), expected));
    }

        // Random
    SECTION("Random Vector") {
        std::vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
        std::vector<int> expected = input;
        boost::range::sort(expected);

        REQUIRE(compareLists(bubbleSort(input), expected));
        REQUIRE(compareLists(selectionSort(input), expected));
    }
}
