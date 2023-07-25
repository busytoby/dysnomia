#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "큰.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    큰* Mu = new 큰();
    Sulphur* Rho = new Sulphur(Mu->Mu, Mu->Rho, Mu->Psi, Mu->Upsilon);
    Iron* Psi = new Iron(Rho, Mu->Tau, Mu->Eta->Sigma);
    Faung* Nu = Psi->Beta();
    Faung* Eta = Psi->Omicron();
    Faung* Sigma = Psi->Delta(Nu, Eta);
    Faung* Upsilon = Psi->Omega(Nu, Eta);
    Aluminium* Tau = new Aluminium(Upsilon);
    Faung* Theta = Psi->Kappa(Tau);

    cout << "Ready Conversation One\n";
}
