#include <iostream>
#include <iomanip>
#include <funktiot.h>


using namespace std;

int main() {
    int a;
    int b;

    cout << "Anna ensimmäinen luku: " << endl;
    cin >> a;
    cout << "Anna toinen luku: " << endl;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    cout << "Summa (retSum): " << summa << endl;

    float osamaara = retDiv(a, b);
    cout << fixed << setprecision(2);
    cout << "Osamäärä (retDiv): " << osamaara << endl;

    return 0;
}
