#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "50_Mei.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Mei* Mu = new Mei();
    Iron* Rho = Mu->Sigma->Omega();
    Eun* Psi = new Eun(Rho);
    Eun* Nu = new Eun(Mu->Upsilon, Rho);

    int i = 999; 
}
