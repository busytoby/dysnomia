#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "08a_Plant.h"
#include "08b_Animal.h"
#include "10_Tung.h"
#include "11_Xiao.h"

using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    int DestructiveAvoidances = 0;

    while (DestructiveAvoidances < 20) {
        try {
            Plant* Alpha = new Plant();
            Animal* Beta = new Animal();

            Tung* Mu = new Tung(Alpha);
            Xiao* Rho = new Xiao(Mu);
            Sulphur* Psi = new Sulphur();
            Qiao* Nu = new Qiao(Rho->Theta, Rho->Theta->Beta(), Rho->Theta->Omicron(), Psi);
            Iron* Eta = new Iron(Psi, Nu->Nu, Mu->Mu->Nu->Omicron());
            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    if (DestructiveAvoidances < 10)
        cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
    else
        cout << "The Universe Was Destroyed, Try Again\n";
}