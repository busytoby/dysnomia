#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "08a_Plant.h"
#include "08b_Animal.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    int DestructiveAvoidances = 0;

    while (DestructiveAvoidances < 10) {
        try {
            Plant* Alpha = new Plant();
            Animal* Beta = new Animal();

            Life* Mu = Alpha;
            Tin* Rho = new Tin(Mu->Upsilon->Rho);
            Iron* Psi = new Iron(Mu->Psi->Mu->Sigma, Mu->Psi->Mu->Upsilon->Beta(), Mu->Psi->Mu->Upsilon->Omicron(), Mu->Psi->Mu->Sigma->Nu, Mu->Psi->Mu->Sigma->Sigma);
            Iron* Nu = new Iron(Psi->Upsilon, Psi->Beta(), Psi->Omicron());
            Eun* Eta = new Eun(Psi);
            Eun* Sigma = new Eun(Eta->Sigma);
            Affinity* Upsilon = Sigma->Sigma->Delta(Sigma->Rho->Beta(), Sigma->Rho->Omicron());
            Aluminium* Tau = new Aluminium(Upsilon);


            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
}