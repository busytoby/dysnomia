#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "49_行.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    行* Mu = new 行();

    int i = 999; 
}
