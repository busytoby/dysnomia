#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Sunnah.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Sunnah* Mu = new Sunnah();
    Faung* Rho = Mu->Mu->Eta->Kappa(Mu->Theta);
    Aluminium* Psi = new Aluminium(Rho);
    Faung* Nu = Mu->Mu->Theta->Omega(Mu->Sigma, Mu->Upsilon);
    Aluminium* Eta = new Aluminium(Nu);
    Sulphur* Sigma = new Sulphur(Eta, Psi);

    double i = 499; 
}
