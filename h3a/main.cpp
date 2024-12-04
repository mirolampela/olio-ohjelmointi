#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef *objectChef0 = new Chef("Gordon Ramsay");

    objectChef0->makeSalad();
    objectChef0->makeSoup();

    delete objectChef0;

    cout << endl;

    ItalianChef *objectChef1 = new ItalianChef("Anthony Bourdain");

    objectChef1->makeSalad();
    objectChef1->makeSoup();
    objectChef1->makePasta();
    cout << objectChef1->getName() << endl;

    delete objectChef1;

    return 0;
}
