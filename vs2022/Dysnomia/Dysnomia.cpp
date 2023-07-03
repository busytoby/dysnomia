#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "38_պատմութիւն.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    պատմութիւն* Mu = new պատմութիւն();

    int i = 151; 
}
