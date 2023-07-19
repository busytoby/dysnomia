#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "56_Gun.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Gun* Mu = new Gun();
    vector<Faung*> Rho;
    Rho.push_back(Mu->Theta->Upsilon);
    Rho.push_back(Mu->Theta->Tau->Upsilon);
    Rho.push_back(Mu->Theta->Eta->Upsilon);
    Rho.push_back(Mu->Theta->Sigma->Mu->Sigma);
    Qiao* Psi = new Qiao(Mu->Upsilon->Mu, Rho.front());
    Iron* Nu = new Iron(Psi->Eta, Psi->Mu->Theta->Upsilon, Rho.back());
    Faung* Eta = Nu->Beta();
    Faung* Sigma = Nu->Omicron();
    Faung* Upsilon = Mu->Sigma->Delta(Eta, Sigma);
    Aluminium* Theta = new Aluminium(Upsilon);

    cout << "Ready";
}
