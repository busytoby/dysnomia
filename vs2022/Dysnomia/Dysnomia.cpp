#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "14_Feng.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Feng* Mu = new Feng();
    Tung* Rho = new Tung(Mu->Theta->Mu->Mu);

}
