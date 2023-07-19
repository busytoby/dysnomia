#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "54_Gui.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Gui* Mu = new Gui();
    Fa* Rho = Mu->Sigma->Pi();
    Fa* Psi = Mu->Tau->Pi();
    Faung* Nu = new Faung(Rho, Psi);
    Faung* Eta = Mu->Mu->Upsilon->Omega(Nu, Mu->Sigma->Theta);
    Aluminium* Sigma = new Aluminium(Eta);
    Faung* Upsilon = Mu->Mu->Upsilon->Kappa(Sigma);
    Aluminium* Tau = new Aluminium(Upsilon);
    Sulphur* Theta = new Sulphur(Sigma, Tau);

    cout << "Ready Qui 1";
}
