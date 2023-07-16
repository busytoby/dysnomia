#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "49_行.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    行* Mu = new 行();
    Sulphur* Rho = new Sulphur(Mu->Eta, Mu->Theta);
    Iron* Psi = new Iron(Rho, Mu->Tau, Mu->Nu);
    Qiao* Nu = new Qiao(Psi, Mu->Tau, Mu->Nu, Rho);
    Iron* Eta = Nu->Omega();

    int i = 999; 
}
