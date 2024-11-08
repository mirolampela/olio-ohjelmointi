#include "animal.h"
#include "dog.h"
#include <iostream>

using namespace std;

int main()
{
    Animal* objectAnimal0 = new Animal();
    objectAnimal0->callOut();

    Dog* objectDog0 = new Dog();
    objectDog0->callOut();

    delete objectAnimal0;
    delete objectDog0;

    return 0;
}
