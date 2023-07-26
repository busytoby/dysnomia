#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "69_Ton.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Ton* Mu = new Ton();
    Faung* Rho = Mu->Theta->Omega(Mu->Psi, Mu->Eta);
    Faung* Psi = Mu->Theta->Omega(Mu->Eta, Mu->Psi);
    Faung* Nu = Mu->Upsilon->Delta(Rho, Psi);
    Sulphur* Eta = new Sulphur(Nu);
    Fa* Sigma = Eta->Mu->Pi();
    Faung* Upsilon = Mu->Theta->Phi(Eta, Sigma);
    Aluminium* Tau = new Aluminium(Upsilon);
    Faung* Theta = Mu->Upsilon->Kappa(Tau);

    cout << "Reaper\n";
}