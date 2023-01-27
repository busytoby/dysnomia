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

            Tin* Mu = new Tin(Alpha->Upsilon->Rho);
            Iron* Rho = new Iron(Alpha->Psi->Mu->Sigma, Alpha->Psi->Mu->Upsilon->Beta(), Alpha->Psi->Mu->Upsilon->Omicron(), Alpha->Psi->Mu->Sigma->Nu, Alpha->Psi->Mu->Sigma->Sigma);
            Iron* Psi = new Iron(Rho->Upsilon, Rho->Beta(), Rho->Omicron());
            Eun* Nu = new Eun(Rho);


            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
}