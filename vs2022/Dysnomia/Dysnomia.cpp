#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Core.h"
#include "Xue.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Core* Mu = new Core();
    Xue* Rho = new Xue(Mu->Mu);
    Faung* Psi = Rho->Mu->Sigma->Theta->Omega(Rho->Mu->Sigma->Sigma->Beta(), Rho->Mu->Sigma->Upsilon);
    int i = 99; 
}
