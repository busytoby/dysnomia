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
    
    Sulphur* Mu = Two->Pi(One->Omega());
    Iron* Rho = One->Tau(Mu, Two->Nu->Tau->Beta(), Two->Nu->Tau->Omicron());
    Qiao* Psi = new Qiao(Rho, Two->Psi->Rho->Beta());

    int i = 99; 
}
