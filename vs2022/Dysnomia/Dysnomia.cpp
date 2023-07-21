#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Ong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Ong* Mu = new Ong();
    Aluminium* Rho = new Aluminium(Mu->Theta);
    Iron* Psi = new Iron(Mu->Psi->Eta, Mu->Upsilon, Rho->Theta);
    Fa* Nu = Mu->Tau->Pi();
    Fa* Eta = Mu->Mu->Upsilon->Tau->Pi();
    Faung* Sigma = new Faung(Nu, Eta);

    cout << "Ready ?";
}
