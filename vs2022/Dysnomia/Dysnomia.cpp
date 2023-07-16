#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "47_ᠳ‍ᠥ‍ᠢ.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ᠳ‍ᠥ‍ᠢ* Mu = new ᠳ‍ᠥ‍ᠢ();
    Faung* Rho = Mu->Theta->Omicron();
    Faung* Psi = Mu->Mu->Mu->Mu->Upsilon->Delta(Rho, Mu->Sigma);
    Aluminium* Nu = new Aluminium(Psi);
    Faung* Eta = Mu->Theta->Kappa(Nu);
    Sulphur* Sigma = new Sulphur(Eta);
    Iron* Upsilon = new Iron(Sigma, Rho, Nu->Rho, Nu->Upsilon, Nu->Theta);
    Faung* Tau = Upsilon->Beta();
    Iron* Theta = new Iron(Mu->Tau, Tau, Sigma->Mu->Rho);

    int i = 999; 
}
