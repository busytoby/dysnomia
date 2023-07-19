#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "55_Di.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Di* Mu = new Di();
    Fa* Rho = Mu->Sigma->Pi();
    Faung* Psi = Mu->Mu->Mu->Upsilon->Phi(Mu->Theta, Rho);
    Fa* Nu = Mu->Tau->Pi();
    Faung* Eta = Mu->Mu->Mu->Upsilon->Phi(Mu->Mu->Mu->Sigma, Nu);
    Iron* Sigma = new Iron(Mu->Mu->Mu->Mu->Rho->Rho->Sigma, Psi, Eta);
    Qiao* Upsilon = new Qiao(Sigma, Psi, Eta, Mu->Mu->Mu->Mu->Mu->Rho->Upsilon);
    Tin* Tau = new Tin(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu, Upsilon);
    Eun* Theta = new Eun(Tau, Sigma);

    cout << "Ready UI 5";
}
