#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "74_ށ.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ށ* Mu = new ށ();
    Iron* Rho = Mu->Theta->Omega();
    Faung* Psi = Rho->Beta();
    Faung* Nu = Rho->Omicron();
    Faung* Eta = Mu->Upsilon->Omega(Psi, Nu);
    Aluminium* Sigma = new Aluminium(Eta);
    Faung* Upsilon = Mu->Nu->Kappa(Sigma);
    Faung* Tau = Mu->Mu->Tau->Delta(Eta, Upsilon);

    cout << "ށީ\n";
}