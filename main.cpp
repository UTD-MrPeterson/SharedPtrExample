#include <iostream>
#include "TestClass.h"

void func2(std::shared_ptr<TestClass> sharedPtr) {
    sharedPtr->shareWisdom();
}

void func() {
    std::shared_ptr<TestClass> sharedPtr = std::make_shared<TestClass>();
    sharedPtr->shareWisdom();
    func2(sharedPtr);
    std::cout << "Leaving without removing the pointer...will it delete?" << std::endl;
}

int main() {
    std::cout << "Hello!" << std::endl;
    func();
    std::cout << "Goodbye!" << std::endl;
}
