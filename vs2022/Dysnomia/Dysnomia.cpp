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

    cout << "Ready UI 6";
}
