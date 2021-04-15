#include <iostream>
#include "a.hpp"

A::A()
{
    std::cout << "A constructor" << std::endl;
    this->_b = new B();
}

A::~A()
{
    std::cout << "A destructor" << std::endl;
    delete this->_b;
}

void A::foo()
{
    std::cout << "A foo" << std::endl;
    this->_b->bar();
}