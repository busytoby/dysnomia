#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "06_Eun.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    int DestructiveAvoidances = 0;

    while (DestructiveAvoidances < 10) {
        try {
            Eun* Mu = new Eun();
            Affinity* Rho = Mu->Sigma->Delta(Mu->Rho->Beta(), Mu->Rho->Omicron());
            Qiao* Psi = new Qiao(Mu->Rho, Rho);
            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
}