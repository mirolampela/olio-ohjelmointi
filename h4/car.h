#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <string>

using namespace std;

class Car
{
public:
    Car();
    void setEngine();
    void setWheels();
    string getModel();
    void setModel(string);
    string getBrand();
    void setBrand(string);
    void printDetails();
private:
    Engine engine;
    Wheel wheels[4];
    string model;
    string brand;


};

#endif // CAR_H
