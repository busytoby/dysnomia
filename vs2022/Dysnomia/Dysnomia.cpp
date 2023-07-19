#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "55_Di.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Di* Mu = new Di();

    cout << "Ready Qui 1";
}
