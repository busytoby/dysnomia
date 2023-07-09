#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "42_剝.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    剝* Mu = new 剝();
    Faung* Rho = Mu->Theta->Omicron();
    Faung* Psi = Mu->Mu->Upsilon->Beta();

    int i = 453; 
}
