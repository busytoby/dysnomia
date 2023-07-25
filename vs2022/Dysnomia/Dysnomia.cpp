#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "큰.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    큰* Mu = new 큰();
    Sulphur* Rho = new Sulphur(Mu->Mu, Mu->Rho, Mu->Psi, Mu->Upsilon);
    Iron* Psi = new Iron(Rho, Mu->Tau, Mu->Eta->Sigma);

    cout << "Ready Universe One\n";
}
