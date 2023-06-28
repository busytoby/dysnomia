#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "32_Tiao.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Tiao* Mu = new Tiao();
    int i = 99; 
}
