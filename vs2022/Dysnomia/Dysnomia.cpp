#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "51_Guan.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Guan* Mu = new Guan();

    int i = 999; 
}
