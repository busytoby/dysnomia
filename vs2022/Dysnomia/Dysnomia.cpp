#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Dong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Dong* Mu = new Dong();

    int i = 99; 
}
