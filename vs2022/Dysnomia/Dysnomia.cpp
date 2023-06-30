#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "37_Tie.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Tie* Mu = new Tie();

    int i = 141; 
}
