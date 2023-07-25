#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "61_Lian.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Lian* Theta = new Lian();
    Life* Tau = Theta->Tau->Rho->Pi();
    Iron* Upsilon = Theta->Rho->Nu->Omega();
    Faung* Sigma = Tau->Sigma->Theta->Delta(Theta->Mu->Sigma, Tau->Theta->Mu->Theta);
    Aluminium* Eta = new Aluminium(Sigma);
    Faung* Nu = Upsilon->Kappa(Eta);
    Faung* Psi = Theta->Upsilon->Nu->Sigma->Kappa(Eta);
    Faung* Rho = Tau->Nu->Delta(Nu, Psi);
    Aluminium* Mu = new Aluminium(Rho);

    cout << "Ready\n";
}
