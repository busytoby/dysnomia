#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Dong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Dong* Mu = new Dong();
    Huo* Rho = new Huo(Mu->Theta, Mu->Eta->Tau, Mu->Psi->Theta->Rho, Mu->Upsilon->Rho, Mu->Tau->Rho, Mu->Nu->Theta, Mu->Tau);
    Rong* Psi = new Rong(Rho, Mu->Sigma->Theta->Rho);

    int i = 99; 
}
