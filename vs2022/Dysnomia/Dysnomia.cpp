#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "66_Zi.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Zi* Mu = new Zi();
    Faung* Rho = Mu->Theta->Beta();
    Faung* Psi = Mu->Theta->Omicron();
    Faung* Nu = Mu->Mu->Mu->Mu->Nu->Delta(Rho, Psi);
    Faung* Eta = Mu->Theta->Delta(Mu->Eta, Nu);
    Faung* Sigma = Mu->Mu->Mu->Psi->Omega(Mu->Sigma, Nu);
    Aluminium* Upsilon = new Aluminium(Sigma);

    cout << "Ready Seol San Zi Jing Yi Jie\n";
}
