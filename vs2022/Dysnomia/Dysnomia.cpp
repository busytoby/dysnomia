#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "73_មេល.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    មេល* Mu = new មេល();
    Faung* Rho = Mu->Tau->Beta();
    Faung* Psi = Mu->Tau->Omicron();
    Iron* Nu = new Iron(Mu->Nu->Eta, Rho, Psi);
    Faung* Eta = Mu->Theta->Beta();
    Faung* Sigma = Mu->Theta->Omicron();
    Iron* Upsilon = new Iron(Mu->Sigma->Eta, Eta, Sigma);
    Qiao* Tau = new Qiao(Nu, Mu->Nu->Rho, Mu->Eta->Psi, Mu->Tau->Upsilon);
    Qiao* Theta = new Qiao(Upsilon, Mu->Sigma->Rho, Mu->Upsilon->Psi, Mu->Theta->Upsilon);

    cout << "Ready មេល Jong One\n";
}