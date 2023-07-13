#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "44_에포린.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    에포린* Mu = new 에포린();
    Faung* Rho = Mu->Upsilon->Delta(Mu->Theta, Mu->Nu);
    Aluminium* Psi = new Aluminium(Rho);
    Faung* Nu = Mu->Upsilon->Kappa(Psi);
    Faung* Eta = Mu->Mu->Mu->Eta->Kappa(Psi);
    Faung* Sigma = Mu->Mu->Mu->Theta->Delta(Eta, Nu);
    Faung* Upsilon = Mu->Mu->Mu->Theta->Delta(Nu, Eta);

    int i = 599; 
}
