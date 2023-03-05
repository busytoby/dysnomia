#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "28_Dang.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Dang* Mu = new Dang();
    Dong* Rho = new Dong(new Host(Mu->Sigma->Nu, Mu->Rho->Nu));
    Dong* Psi = new Dong(new Host(Mu->Upsilon->Nu, Mu->Psi->Nu));
    Dong* Nu = new Dong(new Host(Mu->Tau->Nu, Mu->Nu->Nu));
    Dong* Eta = new Dong(new Host(Mu->Theta->Nu, Mu->Eta->Nu));
    
    int i = 99; 
}
