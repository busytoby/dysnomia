#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "40_En.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    En* Mu = new En();
    Faung* Rho = Mu->Sigma->Delta(Mu->Mu->Rho, Mu->Upsilon);

    int i = 297; 
}
