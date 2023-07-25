#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "64_Seol.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Seol* Mu = new Seol();

    cout << "Seol64 Ready\n";
}
