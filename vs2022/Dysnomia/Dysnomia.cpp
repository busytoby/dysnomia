#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "004_Zuo.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Zuo* Mu = new Zuo();
    Faung* Rho;
    Faung* Psi;
    Faung* Nu;

    for (;;) {
        Mu = new Zuo();
        Rho = new Faung(Mu->Upsilon, Mu->Theta);
        Rho->Charge(Mu->Mu->Mu->Psi->Barn);
        Rho->Induce();
        Rho->Torque();
        Rho->Amplify();
        Rho->Sustain();
        Rho->React();
        Psi = new Faung(Rho->Rho, Rho->Upsilon, Rho->Ohm, Rho->Omicron);
        Nu = new Faung(Rho->Rho, Rho->Upsilon, Rho->Ohm, Rho->Omega);
        
        delete Nu;
        delete Psi;
        delete Rho;
        delete Mu;
    }
}