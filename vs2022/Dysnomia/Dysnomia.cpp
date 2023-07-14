#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "45_म.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    म* Mu = new म();
    Fa* Rho = Mu->Psi->Pi();
    Fa* Psi = Mu->Mu->Eta->Pi();
    Faung* Nu = new Faung(Rho, Psi);
    Faung* Eta = Mu->Mu->Upsilon->Omega(Mu->Rho, Nu);
    Aluminium* Sigma = new Aluminium(Eta);
    Faung* Upsilon = Mu->Mu->Upsilon->Kappa(Sigma);

    int i = 994; 
}
