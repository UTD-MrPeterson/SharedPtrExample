//
// Created by Erik Peterson on 8/31/22.
//

#ifndef SHAREDPTREXAMPLE_TESTCLASS_H
#define SHAREDPTREXAMPLE_TESTCLASS_H


class TestClass {
public:
    TestClass() = default;
    ~TestClass();

    void shareWisdom();

private:
    int counter = 0;
};


#endif //SHAREDPTREXAMPLE_TESTCLASS_H
