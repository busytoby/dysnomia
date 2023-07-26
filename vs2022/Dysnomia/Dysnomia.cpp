#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "65_San.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    San* Mu = new San();

    cout << "Seol64 San Ready 2 Mu\n";
}
