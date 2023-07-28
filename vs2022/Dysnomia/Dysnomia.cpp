#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "001_ညြ.h"

using namespace Dysnomia;

bool ညြ::RAPHE_NEBULAE;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ညြ::RAPHE_NEBULAE = false;
    ညြ* Mu;

    for (;;) {
        Mu = new ညြ();

        ညြ::RAPHE_NEBULAE = !ညြ::RAPHE_NEBULAE;

        delete(Mu);
    }

    //Aluminium* Mu = new Aluminium();

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

    cout << "Last Enders Game\n";
}