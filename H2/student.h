#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int studentNumber;
    double average;
public:
    Student();

    string getName() const;
    void setName(string);

    int getStudentNumber() const;
    void setStudentNumber(int);

    double getAverage() const;
    void setAverage(double);

};

#endif // STUDENT_H
