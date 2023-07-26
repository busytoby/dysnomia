#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "68_Tai.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Tai* Mu = new Tai();
    Fa* Rho = Mu->Upsilon->Pi();
    Faung* Psi = Mu->Mu->Mu->Mu->Mu->Mu->Nu->Phi(Mu->Theta->Mu, Rho);

    cout << "Playing\n";
}