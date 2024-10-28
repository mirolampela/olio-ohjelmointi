#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();
    void printData();
    void setBrand(string newBrand);
    void setModel(string newModel);
    void setYearModel(int newYearModel);
};

#endif // CAR_H
