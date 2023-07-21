#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "58_Ba.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Ba* Mu = new Ba();
    Faung* Rho = Mu->Theta->Omicron();
    Faung* Psi = Mu->Theta->Beta();
    Faung* Nu = Mu->Psi->Delta(Rho, Psi);
    Faung* Eta = Mu->Psi->Omega(Rho, Psi);
    Aluminium* Sigma = new Aluminium(Eta);
    Faung* Tau = Mu->Psi->Kappa(Sigma);
    Faung* Theta = Mu->Mu->Nu->Omega(Eta, Tau);

    cout << "Ready Ba Gua\n";
}
