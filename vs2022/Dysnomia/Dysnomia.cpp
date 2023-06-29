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
    Xun* Psi = new Xun(Rho->Nu->Upsilon, Rho->Nu->Eta);
    Tue* Nu = new Tue(Rho->Upsilon->Rho->Omega(Rho->Nu->Upsilon->Mu->Upsilon->Theta->Beta(), Rho->Nu->Upsilon->Mu->Upsilon->Theta->Omicron()));
    Faung* Eta = new Faung();
    Faung* Sigma = Psi->Theta->Tau->Sigma->Omega(Nu->Theta, Eta);

    int i = 101; 
}
