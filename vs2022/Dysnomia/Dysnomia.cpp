#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "08a_Tong.h"
#include "12_Tsuan.h"

using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    int DestructiveAvoidances = 0;

    while (DestructiveAvoidances < 10) {
        try {
            Tong* Alpha = new Tong();

            Tsuan* Mu = new Tsuan(Alpha);
            Sulphur* Rho = new Sulphur(Mu->Tau->Rho);
            Sulphur* Psi = new Sulphur(Mu->Tau->Psi);
            Sulphur* Nu = new Sulphur(Mu->Tau->Nu);
            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    if (DestructiveAvoidances < 10)
        cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
    else
        cout << "The Universe Was Destroyed, Try Again\n";
}