﻿#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "52_𐡔.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    𐡔* Mu = new 𐡔();
    Faung* Rho = Mu->Mu->Tau->Tau->Omega(Mu->Sigma, Mu->Eta);

    cout << "Ready 𐡔 Planet 999";
}
