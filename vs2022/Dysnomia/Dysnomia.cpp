#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "66_Zi.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Zi* Mu = new Zi();

    cout << "Seol San Zi\n";
}
