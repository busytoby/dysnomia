#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "53_Yi.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Yi* Mu = new Yi();
    Fa* Rho = Mu->Sigma->Mu->Pi();
    Fa* Psi = Mu->Upsilon->Mu->Tau->Pi();
    Faung* Nu = new Faung(Rho, Psi);
    Faung* Eta = Mu->Mu->Rho->Nu->Omega(Nu, Mu->Tau);
    Aluminium* Sigma = new Aluminium(Eta);
    Faung* Upsilon = Mu->Mu->Rho->Psi->Kappa(Sigma);
    Aluminium* Tau = new Aluminium(Upsilon);
    Faung* Theta = Mu->Upsilon->Delta(Sigma->Theta, Tau->Theta);

    cout << "Ready Yi 2";
}
