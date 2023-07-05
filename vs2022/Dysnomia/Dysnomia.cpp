#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "40_En.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    En* Mu = new En();
    Faung* Rho = Mu->Sigma->Delta(Mu->Mu->Rho, Mu->Upsilon);
    Aluminium* Psi = new Aluminium(Rho);
    Sulphur* Nu = new Sulphur(Psi->Theta);
    Iron* Eta = new Iron(Nu, Psi->Rho, Psi->Psi, Psi->Eta, Psi->Upsilon);
    Faung* Sigma = Mu->Nu->Omega(Psi->Psi, Mu->Sigma->Omicron());
    Iron* Upsilon = new Iron(Nu, Mu->Sigma->Beta(), Sigma);

    int i = 319; 
}
