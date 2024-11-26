#include "assosiationa.h"
#include "classb.h"
#include "aggregationa.h"
#include <iostream>

using namespace std;

int main()
{
    //Vaihe 1
    int a = 5;
    int b = 10;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;
    cout << endl;

    int* myPointer = &a;

    cout << "Pointterin osoittama osoite on: " << &myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
    cout << endl;

    myPointer = &b;

    cout << "Pointterin osoittama osoite on: " << &myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    int &refA = a;

    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;
    cout << endl;

    //Vaihe 2 - Assosiation
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout << "Assosiaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;
    cout << endl;

    cout << "Aggregaatio esimerkki:" << endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAggr " << objAggr.getBinfo() << endl;
    cout << endl;

}
