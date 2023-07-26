#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "67_حٰی٘.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    حٰی٘* Mu = new حٰی٘();
    Fa* Rho = Mu->Upsilon->Pi();
    Faung* Psi = Mu->Mu->Theta->Phi(Mu->Tau, Rho);

    cout << "Ready جی One\n";
}