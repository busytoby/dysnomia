#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "19_Sing.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wou* One = new Wou();
    Wou* Two = new Wou();
    
    Sing* Mu = new Sing(One, Two);
    Nat* Rho = new Nat(Mu->Theta, Two->Psi);
    Tung* Psi = new Tung(Rho, One->Rho, Mu->Psi);
    Xiao* Nu = new Xiao(Psi);
    Tsuan* Eta = new Tsuan(Psi, Mu->Theta, Nu);
    Fao* Upsilon = new Fao(Eta, Nu, Rho);
    Feng* Tau = new Feng(Upsilon, Psi);
    Huo* Theta = new Huo(Two->Mu->Mu->Mu);
    int i = 99; 
}
