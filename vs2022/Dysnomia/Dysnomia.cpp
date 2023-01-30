#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "22_Chi.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wou* Sigma = new Wou();
    Wou* Tau = new Wou();
    
    Chi* Rho = new Chi(Sigma, Tau);
    Qiao* Theta = new Qiao(Rho->Psi->Mu);
    int i = 99; 
}
