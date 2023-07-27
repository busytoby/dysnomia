#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "77_ন.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ন* Mu = new ন();
    Faung* Rho = Mu->Upsilon->Beta();
    Faung* Psi = Mu->Upsilon->Omicron();
    Faung* Nu = Mu->Eta->Omega(Rho, Psi);

    cout << "चंगा নাচ নয়\n";
}