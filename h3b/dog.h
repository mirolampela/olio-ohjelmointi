#ifndef DOG_H
#define DOG_H

#include "animal.h"
#include <iostream>
using namespace std;

class Dog : public Animal
{
public:
    Dog();
    virtual void callOut() override;
};

#endif // DOG_H
