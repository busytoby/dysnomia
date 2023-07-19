#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "53_Yi.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Yi* Mu = new Yi();
    Fa* Rho = Mu->Sigma->Mu->Pi();
    Fa* Psi = Mu->Upsilon->Mu->Tau->Pi();
    Faung* Nu = new Faung(Rho, Psi);
    Faung* Eta = Mu->Mu->Rho->Nu->Omega(Nu, Mu->Tau);

    cout << "Ready Yi 1";
}
