#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Sie.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Sie* Mu = new Sie();
    Faung* Psi = Mu->Psi->Tau->Sigma->Omega(Mu->Sigma, Mu->Eta);
    Aluminium* Eta = new Aluminium(Mu->Nu->Mu);
    Faung* Sigma = Mu->Psi->Nu->Theta->Kappa(Eta);

    int i = 108; 
}
