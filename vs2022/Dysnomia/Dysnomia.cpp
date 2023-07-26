#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "68_Tai.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Tai* Mu = new Tai();

    cout << "Playing\n";
}