#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "70_Kong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Kong* Mu = new Kong();
    Faung* Rho = Mu->Mu->Upsilon->Omega(Mu->Upsilon, Mu->Theta);
    Aluminium* Psi = new Aluminium(Rho);
    Faung* Nu = Mu->Mu->Mu->Theta->Kappa(Psi);
    Iron* Eta = new Iron(Mu->Mu->Mu->Mu->Theta, Nu, Rho, Mu->Upsilon, Mu->Theta);

    cout << "Kong The Player Reaper Already Has Original Ideas\n";
}