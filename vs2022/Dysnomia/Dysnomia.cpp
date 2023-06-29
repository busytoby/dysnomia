#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Gue.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Gue* Rho = new Gue();
    int i = 9; 
}
