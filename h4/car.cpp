#include "car.h"
#include <iostream>
using namespace std;

Car::Car() {}

void Car::setEngine()
{
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels()
{
    for (int i=0; i<4; i++) {
        wheels[i].setSize(17);
        wheels[i].setType("kesarengas");
    }
}

string Car::getModel()
{
    return model;
}

void Car::setModel(string newModel)
{
    model = newModel;
}

string Car::getBrand()
{
    return brand;
}

void Car::setBrand(string newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout << "Auto : " << model << " " << brand << endl;
    cout << "Moottori: " << engine.getHorsepower() << " hp, " << engine.getDisplacement() << " L" << endl;
    for (int i=0; i<4; i++) {
        cout << "Rengas " << i+1 << ":" << wheels[i].getSize() << " tuumaa, " << wheels[i].getType() << endl;
    }
}
