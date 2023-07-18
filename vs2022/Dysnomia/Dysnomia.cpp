#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "52_𐡔.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    𐡔* Mu = new 𐡔();
    Faung* Rho = Mu->Mu->Tau->Tau->Omega(Mu->Sigma, Mu->Eta);
    Faung* Psi = Mu->Mu->Tau->Tau->Omega(Mu->Upsilon, Mu->Rho->Upsilon);
    Faung* Nu = Mu->Rho->Psi->Delta(Rho, Psi);
    Faung* Eta = Mu->Mu->Theta->Nu->Omega(Nu, Mu->Theta->Upsilon);

    cout << "Ready 𐡔 Nebulae 1";
}
