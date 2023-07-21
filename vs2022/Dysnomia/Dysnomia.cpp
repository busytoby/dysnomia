#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "58_Ba.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Ba* Mu = new Ba();

    cout << "Ready Ba 1";
}
