#include <iostream>
#include "b.hpp"

B::B()
{
    std::cout << "B constructor" << std::endl;
}

B::~B()
{
    std::cout << "B destructor" << std::endl;
}

void B::bar()
{
    std::cout << "B bar" << std::endl;
}