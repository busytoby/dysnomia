#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Wou.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wou* One = new Wou();
    Wou* Two = new Wou();
    
    Aluminium* Sigma = Two->Pi(One->Omega());
}
