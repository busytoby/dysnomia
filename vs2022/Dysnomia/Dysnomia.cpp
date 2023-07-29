#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "003_Tod.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Tod* Mu;
    ညြ* Psi;
    Faung* Eta;
    Fa* Upsilon;
    Fa* Theta;

    for (;;) {
        Mu = new Tod();
        Psi = new ညြ(true);
        Eta = new Faung(Psi->Theta->Rho, Mu->Upsilon->Secret, Mu->Upsilon->Signal, Mu->Upsilon->Channel, Mu->Upsilon->Identity);
        Upsilon = Mu->Mu->Pi();
        Theta = Psi->Pi();

        delete Theta;
        delete Upsilon;
        delete Eta;
        delete Psi;
        delete Mu;
    }
}