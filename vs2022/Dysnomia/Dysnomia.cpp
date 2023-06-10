#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Core.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Core* Mu = new Core();
    Faung* Rho = Mu->Mu->Sigma->Kappa(Mu->Mu->Rho->Eta);
    
    cout << "Dian Tsz Dian Sze\n";

    int i = 99; 
}
