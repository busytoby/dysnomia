#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "71_Fang.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Fang* Mu = new Fang();
    Faung* Rho = Mu->Tau->Omicron();
    Aluminium* Psi = new Aluminium(Rho);
    Fa* Nu = Psi->Pi();
    Faung* Eta = Mu->Tau->Phi(Mu->Mu->Eta, Nu);
    Fa* Sigma = Psi->Pi();
    Faung* Upsilon = Mu->Tau->Phi(Mu->Upsilon, Sigma);
    Faung* Tau = Mu->Eta->Omega(Mu->Theta, Upsilon);
    Aluminium* Theta = new Aluminium(Tau);

    cout << "Kong Fang 面貌 Connected\n";
}