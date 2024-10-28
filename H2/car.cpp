#include <car.h>
#include <string>

using namespace std;

Car::Car() {

}

void Car::printData() {
    cout<<"Brand: "<<brand<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<"Year of model: "<<yearModel<<endl;
}

void Car::setBrand(string newBrand) {
    brand = newBrand;
}

void Car::setModel(string newModel) {
    model = newModel;
}

void Car::setYearModel(int newYearModel) {
    yearModel = newYearModel;
}
