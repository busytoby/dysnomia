#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "59_Er.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Er* Mu = new Er();

    cout << "Ready Ba Gua\n";
}
