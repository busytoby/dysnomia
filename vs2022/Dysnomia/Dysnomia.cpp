#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "70_Kong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Kong* Mu = new Kong();
    Faung* Rho = Mu->Mu->Upsilon->Omega(Mu->Upsilon, Mu->Theta);
    Aluminium* Psi = new Aluminium(Rho);
    Faung* Nu = Mu->Mu->Mu->Theta->Kappa(Psi);
    Iron* Eta = new Iron(Mu->Mu->Mu->Mu->Theta, Nu, Rho, Mu->Upsilon, Mu->Theta);
    Faung* Sigma = Eta->Delta(Nu, Rho);
    Sulphur* Upsilon = new Sulphur(Sigma);
    Iron* Tau = new Iron(Upsilon, Sigma, Nu, Rho, Mu->Theta);
    Faung* Theta = Tau->Beta();

    cout << "Kong Mindfulness\n";
}