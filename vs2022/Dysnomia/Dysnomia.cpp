#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "큰.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    큰* Mu = new 큰();

    cout << "Ready Universal One\n";
}
