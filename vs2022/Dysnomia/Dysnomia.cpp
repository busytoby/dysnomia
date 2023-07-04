#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "39_Meng.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Meng* Theta = new Meng();

    int i = 151; 
}
