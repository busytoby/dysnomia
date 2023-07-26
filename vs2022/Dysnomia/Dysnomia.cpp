#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "65_San.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    San* Mu = new San();
    Faung* Rho = Mu->Theta->Kappa(Mu->Upsilon);
    Aluminium* Psi = new Aluminium(Rho);
    Faung* Nu = Mu->Mu->Psi->Kappa(Psi);
    Faung* Eta = Mu->Mu->Psi->Delta(Rho, Nu);
    Faung* Sigma = Mu->Mu->Mu->Nu->Omega(Nu, Eta);
    Aluminium* Upsilon = new Aluminium(Sigma);
    Sulphur* Tau = new Sulphur(Psi, Upsilon);

    cout << "Seol64 San Connected\n";
}
