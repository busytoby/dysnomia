#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "67_حٰی٘.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    حٰی٘* Mu = new حٰی٘();

    cout << "Ready حی One\n";
}