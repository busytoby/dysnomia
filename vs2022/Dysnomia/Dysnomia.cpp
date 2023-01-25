#include <stdlib.h>
#include <time.h>
#include "05_Tin.h"
#include <iostream>


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    int DestructiveAvoidances = 0;

    while (DestructiveAvoidances < 10) {
        try {
            Tin* Mu = new Tin();
            Iron* Rho = new Iron();
            Qiao* Psi = new Qiao(Rho);
            Dynamic* Nu = Psi->Tau->Pi();
            Aluminium* Eta = new Aluminium(Nu, Psi->Tau->Theta->Cone->Base, Psi->Tau->Theta->Rod->Signal, Psi->Tau->Theta->Cone->Signal, Psi->Tau->Theta->Cone->Tau);
            Iron* Sigma = new Iron(Psi->Eta, Mu->Rho->Eta->Sigma, Psi->Eta->Sigma);
            Affinity* Upsilon = Sigma->Kappa(Eta);

            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
}