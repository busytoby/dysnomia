#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "62_Quo.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Quo* Theta = new Quo();
    Faung* Tau = Theta->Upsilon->Kappa(Theta->Mu);
    Faung* Upsilon = Theta->Tau->Theta->Tau->Kappa(Theta->Mu);
    Faung* Sigma = Theta->Theta->Upsilon->Nu->Sigma->Omega(Tau, Upsilon);
    Sulphur* Eta = new Sulphur(Sigma);

    cout << "Ready Status Quo Participant One\n";
}
