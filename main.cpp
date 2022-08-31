#include <iostream>
#include "TestClass.h"

void func() {
    std::shared_ptr<TestClass> sharedPtr = std::make_shared<TestClass>();
    std::cout << "I made the pointer, but I won't delete it!" << std::endl;
}

int main() {
    std::cout << "Hello!" << std::endl;
    func();
    std::cout << "Goodbye!" << std::endl;
}
