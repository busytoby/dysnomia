#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Core.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Core* Mu = new Core();
    Mu->Mu->Mu->Omega(Mu->Mu->Rho->Eta, Mu->Mu->Psi->Nu, Mu->Mu->Nu->Upsilon, Mu->Mu->Eta->Sigma);

    int i = 99; 
}
