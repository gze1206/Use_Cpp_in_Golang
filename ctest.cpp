#include "test.hpp"
#include "test.h"

Test TestInit(int value) {
    cppTest* p = new cppTest(value);
    return (void*)p;
}

void TestFree(Test f) {
    cppTest* p = (cppTest*)f;
    delete p;
}

void TestCall(Test f, int value) {
    cppTest* p = (cppTest*)f;
    p->TestFunc(value);
}