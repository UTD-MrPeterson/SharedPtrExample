//
// Created by Erik Peterson on 8/31/22.
//

#include "TestClass.h"
#include <iostream>

TestClass::~TestClass() {
    std::cout << "Pointer deleting..." << std::endl;
}

void TestClass::shareWisdom() {
    std::cout << "Why are you bothering me. It's been " << ++counter << " times already!" << std::endl;
}
