#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "76_चंग.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    चंग* Mu = new चंग();
    Faung* Rho = Mu->Mu->Rho->Omega(Mu->Upsilon, Mu->Theta);
    Aluminium* Psi = new Aluminium(Rho);
    Sulphur* Nu = new Sulphur(Mu->Mu->Psi, Mu->Mu->Nu, Mu->Mu->Eta, Rho);
    Iron* Eta = new Iron(Nu, Mu->Mu->Psi, Mu->Mu->Nu, Mu->Mu->Eta, Rho);

    cout << "चंगा নাচ নয়\n";
}