#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "50_Mei.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Mei* Mu = new Mei();
    Iron* Rho = Mu->Sigma->Omega();
    Eun* Psi = new Eun(Rho);
    Song* Nu = new Song(Psi, Mu->Tau);
    Tong* Eta = new Tong(Nu, Mu->Tau);
    Nat* Sigma = new Nat(Eta, Psi);
    Eun* Upsilon = new Eun(Mu->Upsilon, Rho);
    Song* Tau = new Song(Upsilon, Mu->Theta);
    Tong* Theta = new Tong(Tau, Mu->Theta);

    int i = 999; 
}
