#include "car.h"
#include "engine.h"
#include "wheel.h"

#include <iostream>

using namespace std;

int main()
{
    Car car0;

    car0.setBrand("Toyota");
    car0.setModel("Corolla");
    car0.setEngine();
    car0.setWheels();

    car0.printDetails();

    return 0;
}
