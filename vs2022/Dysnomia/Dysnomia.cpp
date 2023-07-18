#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "51_Guan.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Guan* Mu = new Guan();
    Nat* Rho = new Nat(Mu->Theta, Mu->Upsilon);
    Fa* Psi = Mu->Tau->Psi->Pi();
    Fa* Nu = Rho->Tau->Pi();
    Faung* Eta = new Faung(Psi, Nu);

    cout << "Ready Guan Planet 999";
}
