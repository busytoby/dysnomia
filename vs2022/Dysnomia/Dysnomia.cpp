#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "62_Quo.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Quo* Theta = new Quo();

    cout << "Status Quo Ready\n";
}
