#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Sunnah.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Sunnah* Mu = new Sunnah();

    double i = 490.13; 
}
