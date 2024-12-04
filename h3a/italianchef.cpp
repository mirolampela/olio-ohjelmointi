#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << " dekonstruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

string ItalianChef::getName()
{
    return "name of the Italian Chef is " + name;
}
