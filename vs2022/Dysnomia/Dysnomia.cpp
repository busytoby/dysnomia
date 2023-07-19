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

    cout << "Ready Yi 8";
}
