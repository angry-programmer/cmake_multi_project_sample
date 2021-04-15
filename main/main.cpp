#include <iostream>
#include "a.hpp"
#include "b.hpp"

int main(int argc, char * argv[])
{
    std::cout << "Hello, World!" << std::endl;
    auto b = new B();
    b->bar();
    delete b;

    auto a = new A();
    a->foo();
    delete a;
    return 0;
}