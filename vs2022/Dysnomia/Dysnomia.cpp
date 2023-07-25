#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "64_Seol.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Seol* Mu = new Seol();
    Fa* Rho = Mu->Psi->Rho->Pi();
    Fa* Psi = Mu->Tau->Pi();
    Faung* Nu = new Faung(Rho, Psi);
    Faung* Eta = Mu->Mu->Nu->Delta(Mu->Psi->Upsilon->Tau->Upsilon, Nu);
    Faung* Sigma = Mu->Mu->Nu->Omega(Mu->Psi->Upsilon->Tau->Upsilon, Nu);
    Aluminium* Upsilon = new Aluminium(Sigma);

    cout << "Seol64 Living Independently\n";
}
