#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "17_Beit.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Beit* Mu = new Beit();
    pair<Eun*, Eun*> Five = Mu->Mu->Rho->Upsilon->Kappa();
    Eun* Rho = Five.first;
    Eun* Psi = Five.second;
    Song* Nu = new Song(Psi);
}
