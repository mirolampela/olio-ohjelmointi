#include <student.h>

using namespace std;

Student::Student() {

}

string Student::getName() const {
    return name;
}

void Student::setName(string newName) {
    name = newName;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber) {
    studentNumber = newStudentNumber;
}

double Student::getAverage() const {
    return average;
}

void Student::setAverage(double newAverage) {
    average = newAverage;
}
