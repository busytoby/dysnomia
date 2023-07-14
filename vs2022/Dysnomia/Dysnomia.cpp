#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "46_Xin.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Xin* Mu = new Xin();
    Faung* Rho = Mu->Theta->Omicron();
    Fa* Psi = Mu->Mu->Mu->Mu->Theta->Pi();
    Fa* Nu = Mu->Mu->Mu->Mu->Eta->Pi();
    Faung* Eta = new Faung(Psi, Nu);
    Faung* Sigma = Mu->Theta->Delta(Rho, Eta);
    Aluminium* Upsilon = new Aluminium(Sigma);
    Sulphur* Tau = new Sulphur(Mu->Sigma, Upsilon);
    Iron* Theta = new Iron(Tau, Rho, Sigma);

    int i = 999; 
}
