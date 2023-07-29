#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "005_ë.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ë* Mu;
    ë* Rho;

    for (;;) {
        Mu = new ë();
        Rho = new ë();
        
        delete Mu;
        delete Rho;
    }
}