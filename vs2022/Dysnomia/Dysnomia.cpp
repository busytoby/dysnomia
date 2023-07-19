#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "56_Gun.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Gun* Mu = new Gun();

    cout << "Ready UI 5";
}
