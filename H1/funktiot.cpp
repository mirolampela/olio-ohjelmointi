#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int luku1, int luku2)
{
    int summa = luku1 + luku2;
    cout << "Summa (calcSum): " << summa << endl;
}

void calcDiv(int luku1, int luku2)
{
    if (luku2 == 0) {
        cout << "Virhe! Nollalla ei voi jakaa." << endl;
    } else {
        float osamaara = static_cast<float>(luku1) / luku2;
        cout << fixed << setprecision(2);
        cout << "Osamäärä (calcDiv): " << osamaara << endl;
    }
}

int retSum(int luku1, int luku2)
{
    int summa = luku1 + luku2;
    return summa;
}

float retDiv(int luku1, int luku2)
{
    if (luku2 == 0) {
        cout << "Virhe! Nollalla ei voi jakaa." << endl;
        return 0;
    } else {
        float osamaara = static_cast<float>(luku1) / luku2;
        return osamaara;
    }
}
