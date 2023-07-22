#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "60_Tuo.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Tuo* Mu = new Tuo();
    Tung* Rho = new Tung(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Rho, Mu->Upsilon, Mu->Mu->Mu->Mu->Psi);

    cout << "Tuo Ba Tuo Mon Tung\n";
}
