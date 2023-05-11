#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Pin.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Pin* Mu = new Pin();
    Tong* Rho = Mu->Rho->Tau->Beta();
    Tsong* Psi = Mu->Psi->Tau->Pi();
    Fao* Nu = new Fao(Mu->Sigma->Nu->Mu->Rho->Upsilon, Mu->Sigma->Nu->Nu, new Nat(Rho));
    Tsuan* Eta = Nu->Delta(Mu->Nu->Tau->Omicron());
    
    cout << "Dian Tsz Dian Sze\n";

    int i = 99; 
}
