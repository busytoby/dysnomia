#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "演.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    演* Mu = new 演();
    Faung* Rho = Mu->Mu->Theta->Beta();
    Faung* Psi = Mu->Upsilon->Omicron();
    Faung* Nu = Mu->Theta->Omega(Rho, Psi);


    int i = 999; 
}
