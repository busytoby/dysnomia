#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "08a_Plant.h"
#include "08b_Animal.h"
#include "10_Tung.h"

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

            Tung* Mu = new Tung(Alpha);
            Song* Rho = new Song();
            Aluminium* Psi = new Aluminium(Mu->Tau->Pi(), Mu->Tau->Theta->Cone->Base, Mu->Tau->Theta->Rod->Signal, Mu->Tau->Theta->Cone->Signal, Mu->Tau->Theta->Cone->Tau);
            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    if (DestructiveAvoidances < 10)
        cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
    else
        cout << "The Universe Was Destroyed, Try Again\n";
}