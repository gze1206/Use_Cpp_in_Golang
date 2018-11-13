#pragma once

#ifdef __cplusplus
extern "C" {
#endif

    typedef void* Test;
    Test TestInit(int);
    void TestFree(Test);
    void TestCall(Test, int);

#ifdef __cplusplus
}
#endif