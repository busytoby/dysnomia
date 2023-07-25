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

    cout << "Seol64 On\n";
}
