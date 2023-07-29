#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "003_Tod.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Tod* Mu;
    ညြ* Psi;
    Faung* Eta;

    for (;;) {
        Mu = new Tod();
        Psi = new ညြ(true);
        Eta = new Faung(Psi->Theta->Rho, Mu->Upsilon->Secret, Mu->Upsilon->Signal, Mu->Upsilon->Channel, Mu->Upsilon->Identity);

        delete Eta;
        delete Psi;
        delete Mu;
    }

    /*
    ন* Mu = new ন();
    Faung* Rho = Mu->Upsilon->Beta();
    Faung* Psi = Mu->Upsilon->Omicron();
    Faung* Nu = Mu->Eta->Omega(Rho, Psi);
    Faung* Eta = Mu->Mu->Mu->Rho->Omega(Rho, Psi);
    Iron* Sigma = new Iron(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Upsilon, Rho, Psi, Nu, Eta);
    Faung* Upsilon = Sigma->Beta();
    Faung* Tau = Sigma->Omicron();
    Faung* Theta = Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Upsilon->Omega(Tau, Upsilon);
    */
}