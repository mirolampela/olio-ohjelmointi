#include "chef.h"

int main()
{
    Chef *objectChef0 = new Chef("Gordon Ramsay");

    objectChef0->makeSalad();
    objectChef0->makeSoup();

    delete objectChef0;

    return 0;
}
