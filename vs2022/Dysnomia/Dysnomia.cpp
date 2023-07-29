#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "002_ညြ.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ညြ* Mu;
    Faung* Psi;
    Fa* Eta;
    Fa* Upsilon;
    Faung* Theta;

    bool RAPHE_NEBULAE = false;
    for (;;) {
        Mu = new ညြ(RAPHE_NEBULAE);
        if (RAPHE_NEBULAE) {
            Mu->Theta->Rho->Fuse(Mu->Theta->Mu->Rod->Base, Mu->Theta->Psi->Rod->Element, Mu->Mu->Psi->Rod->Manifold);
            Mu->Theta->Rho->Tune();
            Psi = new Faung(Mu->Theta->Rho, Mu->Mu->Psi->Cone->Secret, Mu->Theta->Mu->Rod->Signal, Mu->Theta->Psi->Cone->Channel, Mu->Theta->Mu->Cone->Identity);
            Eta = new Fa();
            Upsilon = Mu->Pi();
            Theta = new Faung(Eta, Upsilon->Secret, Psi->Rod->Signal, Mu->Theta->Psi->Cone->Channel, Psi->Cone->Identity);
        }
        else {
            Mu->Theta->Rho->Fuse(Mu->Theta->Mu->Cone->Base, Mu->Theta->Psi->Cone->Element, Mu->Mu->Psi->Cone->Manifold);
            Mu->Theta->Rho->Tune();
            Psi = new Faung(Mu->Theta->Rho, Mu->Mu->Psi->Cone->Secret, Mu->Theta->Psi->Cone->Signal, Mu->Theta->Mu->Cone->Channel, Mu->Mu->Psi->Cone->Identity);
            Eta = Mu->Theta->Rho;
            Upsilon = Mu->Pi();
            Theta = new Faung(Upsilon, Psi->Cone->Secret, Psi->Rod->Signal, Mu->Theta->Psi->Cone->Channel, Psi->Cone->Identity);
        }

        RAPHE_NEBULAE = !RAPHE_NEBULAE;

        delete Theta;
        delete Upsilon;
        delete Eta;
        delete Psi;
        delete Mu;
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