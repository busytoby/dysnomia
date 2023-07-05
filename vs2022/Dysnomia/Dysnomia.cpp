#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "41_Gua.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Gua* Mu = new Gua();
    Aluminium* Rho = new Aluminium(Mu->Tau);
    Faung* Psi = Mu->Eta->Kappa(Rho);
    Faung* Nu = Mu->Mu->Nu->Delta(Mu->Tau, Psi);
    Iron* Eta = new Iron(Mu->Nu, Mu->Mu->Psi->Beta(), Nu);

    int i = 391; 
}
