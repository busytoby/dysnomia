#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "14_Feng.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Feng* Mu = new Feng();
    Tung* Rho = new Tung(Mu->Theta->Mu->Mu);
    Xiao* Psi = new Xiao(Rho);
    Qiao* Nu = new Qiao(Psi->Theta, Psi->Theta->Omicron(), Psi->Theta->Beta(), Mu->Psi->Theta->Mu->Eta);
    Tung* Eta = new Tung(Mu->Rho->Mu->Mu->Mu);

}
