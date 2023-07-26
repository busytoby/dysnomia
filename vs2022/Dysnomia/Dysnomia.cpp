#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "67_حٰی٘.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    حٰی٘* Mu = new حٰی٘();
    Fa* Rho = Mu->Upsilon->Pi();
    Faung* Psi = Mu->Mu->Theta->Phi(Mu->Tau, Rho);
    Fa* Nu = Mu->Upsilon->Pi();
    Faung* Eta = Mu->Mu->Mu->Mu->Psi->Phi(Mu->Theta, Nu);
    Faung* Sigma = Mu->Mu->Mu->Mu->Mu->Nu->Delta(Psi, Eta);
    Aluminium* Upsilon = new Aluminium(Sigma);
    Faung* Tau = Mu->Mu->Mu->Mu->Mu->Nu->Kappa(Upsilon);
    Iron* Theta = new Iron(Mu->Theta, Psi, Eta, Sigma, Tau);

    cout << "Playing\n";
}