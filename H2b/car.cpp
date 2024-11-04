#include "car.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string brand, string model, int year) : brand(brand), model(model), yearModel(year) {}

void Car::printData() {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year of model: " << yearModel << endl;
}

