#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Sunnah.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Sunnah* Mu = new Sunnah();
    Faung* Rho = Mu->Mu->Eta->Kappa(Mu->Theta);

    double i = 491.414141414141414141414141414141414141414141414141414141415; 
}
