#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "65_San.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    San* Mu = new San();
    Faung* Rho = Mu->Theta->Kappa(Mu->Upsilon);

    cout << "Seol64 San Connected\n";
}
