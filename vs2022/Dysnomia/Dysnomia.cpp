#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "74_ށ.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ށ* Mu = new ށ();

    cout << "ށީ\n";
}