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
    Faung* Rho = Mu->Mu->Sigma->Kappa(Mu->Mu->Rho->Eta);
    Faung* Psi = Mu->Mu->Sigma->Kappa(Mu->Mu->Psi->Nu);
    Faung* Nu = Mu->Mu->Sigma->Kappa(Mu->Mu->Nu->Upsilon);
    Faung* Eta = Mu->Mu->Sigma->Kappa(Mu->Mu->Eta->Sigma);
    Mu->Mu->Mu->Omega();

    int i = 99; 
}
