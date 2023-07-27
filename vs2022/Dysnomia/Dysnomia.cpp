#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "75_ฮิ.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ฮิ* Mu = new ฮิ();
    Fa* Rho = Mu->Sigma->Pi();
    Faung* Psi = Mu->Rho->Phi(Mu->Mu->Mu->Mu->Mu->Mu->Eta, Rho);
    Faung* Nu = Mu->Rho->Delta(Mu->Tau, Psi);
    Faung* Eta = Mu->Rho->Omega(Psi, Nu);
    Aluminium* Sigma = new Aluminium(Eta);
    Faung* Upsilon = Mu->Mu->Mu->Mu->Mu->Mu->Mu->Theta->Kappa(Sigma);

    cout << "ށީ ฮ๊ ?\n";
}