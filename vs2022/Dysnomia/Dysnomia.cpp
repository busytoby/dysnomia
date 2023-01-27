#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "08a_Plant.h"
#include "08b_Animal.h"
#include "09_Nat.h"

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

            Nat* Mu = new Nat(Alpha);
            Eun* Rho = new Eun(Mu->Nu);
            Song* Psi = new Song(Mu->Eta);
            Qiao* Nu = new Qiao(Mu->Psi);
            Qiao* Eta = new Qiao(Psi->Sigma, Mu->Rho->Theta->Kappa(Nu->Tau));
            Tin* Sigma = new Tin(Psi->Rho);
            Eun* Upsilon = new Eun();
            Aluminium* Tau = new Aluminium(Upsilon->Sigma->Delta(Upsilon->Rho->Omicron(), Upsilon->Rho->Beta()));
            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
}