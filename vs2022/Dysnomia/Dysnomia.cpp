#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "41_Gua.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Gua* Mu = new Gua();

    int i = 329; 
}
