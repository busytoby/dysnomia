#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "21_Chu.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wou* One = new Wou();
    Wou* Two = new Wou();
    
    Chu* Mu = new Chu(One, Two);
    Qiao* Psi = new Qiao(Mu->Eta->Upsilon->Theta, Mu->Eta->Eta->Rho, Mu->Eta->Mu->Psi->Eta, Mu->Theta->Mu->Mu);
    Eun* Nu = new Eun(Psi->Theta);
    int i = 99; 
}
