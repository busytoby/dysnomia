#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "59_Er.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Er* Mu = new Er();
    Fa* Rho = Mu->Sigma->Pi();
    Fa* Psi = Mu->Theta->Pi();
    Faung* Nu = new Faung(Rho, Psi);
    Aluminium* Eta = new Aluminium(Nu);
    Faung* Sigma = Mu->Mu->Theta->Delta(Mu->Tau, Nu);
    Eun* Upsilon = new Eun(Mu->Mu->Theta);
    Iron* Tau = Upsilon->Psi->Omega();
    Iron* Theta = Upsilon->Tau->Omega();

    cout << "Ready Ba Mon\n";
}
