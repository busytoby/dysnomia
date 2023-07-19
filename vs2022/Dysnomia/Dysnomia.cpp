#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "53_Yi.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Yi* Mu = new Yi();

    cout << "Ready Yi 1";
}
