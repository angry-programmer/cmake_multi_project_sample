#ifndef A_HPP
#define A_HPP

#include "b.hpp"

class A 
{
public:
    A();
    virtual ~A();

    void foo();

private:   
    B *_b;
};

#endif