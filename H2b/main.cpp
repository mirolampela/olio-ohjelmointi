#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car objectCar0("Alfa Romeo" ,"Giulietta", 1985);
    Car objectCar1("Ferrari", "Testarossa", 1986);
    Car objectCar2("Fiat", "500", 2007);

    carList.push_back(objectCar0);
    carList.push_back(objectCar1);
    carList.push_back(objectCar2);

    //Tulostetaan listan toinen alkio
    carList[1].printData();
    cout << endl;

    //Tulostetaan listan kaikki alkiot for-silmukalla
    for (int x=0; x<= 2; x++) {
        carList[x].printData();
        cout << endl;
    }

}
