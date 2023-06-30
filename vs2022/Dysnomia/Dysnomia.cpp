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
    Faung* Rho = Mu->Psi->Tau->Sigma->Omega(Mu->Sigma, Mu->Eta);
    Aluminium* Psi = new Aluminium(Mu->Nu->Mu);
    Faung* Nu = Mu->Psi->Nu->Theta->Kappa(Psi);
    Faung* Eta = Mu->Rho->Mu->Eta->Psi->Delta(Psi->Eta, Psi->Upsilon);
    Faung* Sigma = Mu->Rho->Mu->Eta->Psi->Omega(Eta, Nu);
    Sulphur* Upsilon = new Sulphur(Sigma);
    Iron* Tau = new Iron(Upsilon, Eta, Nu);
    Faung* Theta = Tau->Kappa(Psi);

    int i = 141; 
}
