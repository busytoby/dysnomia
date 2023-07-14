#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "46_Xin.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Xin* Mu = new Xin();
    Faung* Rho = Mu->Theta->Omicron();

    int i = 999; 
}
