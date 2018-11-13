#include <iostream>
#include "test.hpp"

cppTest::~cppTest() {
    std::cout << "delete " << i << std::endl;
}

void cppTest::TestFunc(int value) {
    std::cout << i << " * " << value << " = " << i * value << std::endl;
}