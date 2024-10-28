#include <car.h>
#include <rectangle.h>
#include <student.h>
#include <memory>

using namespace std;

int main()
{
    Car car1;
    car1.setBrand("Alfa Romeo");
    car1.setModel("Giulia");
    car1.setYearModel(2019);
    car1.printData();

    Rectangle *rectangle1 = new Rectangle;
    rectangle1->setWidth(26);
    rectangle1->setHeight(10);
    cout << "Rectangle area: " << rectangle1->getArea() << endl;
    cout << "Rectangle circum: " << rectangle1->getCircum() << endl;
    delete rectangle1;
    rectangle1 = nullptr;

    unique_ptr<Student> student1 = make_unique<Student>();
    student1->setName("Jyrki");
    student1->setStudentNumber(10010);
    student1->setAverage(8.3);
    cout << "Student name: " << student1->getName() << endl;
    cout << "Student number: " << student1->getStudentNumber() << endl;
    cout << "Average: " << student1->getAverage() << endl;

}
