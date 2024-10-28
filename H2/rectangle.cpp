#include <rectangle.h>
#include <iostream>

using namespace std;

Rectangle::Rectangle() {

}

double Rectangle::getArea() const {
    double area = width * height;
    return area;
}

double Rectangle::getCircum() const {
    double circum = 2 * (width * height);
    return circum;
}

void Rectangle::setWidth(double newWidth) {
    width = newWidth;
}

void Rectangle::setHeight(double newHeight) {
    height = newHeight;
}
