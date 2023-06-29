#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "35_Tue.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Gue* Rho = new Gue();
    Rho->Nu->Upsilon->Alpha();
    Rho->Nu->Eta->Alpha();
    Xun* Nu = new Xun(Rho->Nu->Upsilon, Rho->Nu->Eta);
    Tue* Eta = new Tue(Rho->Upsilon->Rho->Omega(Rho->Nu->Upsilon->Mu->Upsilon->Theta->Beta(), Rho->Nu->Upsilon->Mu->Upsilon->Theta->Omicron()), Nu);

    int i = 100; 
}
