#ifndef CLASSB_H
#define CLASSB_H

#include <string>
using namespace std;

class ClassB
{
public:
    ClassB();
    void setInfo(string);
    string getInfo();
private:
    string info;
};

#endif // CLASSB_H
