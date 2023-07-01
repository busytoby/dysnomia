#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "37_Tie.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Tie* Mu = new Tie();
    Iron* Rho = new Iron(Mu->Upsilon, Mu->Theta, Mu->Sigma, Mu->Eta, Mu->Nu);
    Qiao* Psi = new Qiao(Rho, Mu->Rho, Mu->Sigma, Mu->Upsilon);
    Faung* Nu = Rho->Delta(Mu->Theta, Psi->Upsilon);
    Aluminium* Eta = new Aluminium(Nu);
    Faung* Sigma = Rho->Kappa(Eta);
    Faung* Upsilon = Rho->Omega(Sigma, Nu);
    Aluminium* Tau = new Aluminium(Upsilon);
    Faung* Theta = Mu->Tau->Kappa(Tau);

    int i = 151; 
}
