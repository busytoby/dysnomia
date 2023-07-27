#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "72_Ixtli.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Ixtli* Mu = new Ixtli();
    Fa* Rho = Mu->Theta->Pi();
    Faung* Psi = Mu->Mu->Tau->Phi(Mu->Mu->Upsilon, Rho);
    Qiao* Nu = new Qiao(Mu->Mu->Tau, Mu->Tau, Psi, Mu->Mu->Upsilon);
    Qiao* Eta = new Qiao(Mu->Mu->Eta, Mu->Tau, Psi, Mu->Mu->Upsilon);
    Qiao* Sigma = new Qiao(Mu->Mu->Mu->Mu->Theta, Mu->Tau, Psi, Mu->Mu->Upsilon);
    Qiao* Upsilon = new Qiao(Mu->Mu->Mu->Mu->Upsilon, Mu->Tau, Psi, Mu->Mu->Upsilon);
    Iron* Tau = new Iron(Eta->Eta, Nu->Rho, Eta->Psi, Sigma->Nu, Upsilon->Upsilon);
    Iron* Theta = new Iron(Upsilon->Eta, Nu->Rho, Eta->Psi, Sigma->Nu, Upsilon->Upsilon);

    cout << "មេល\n";
}