#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "42_Sue.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Sue* Mu = new Sue();

    int i = 453; 
}
