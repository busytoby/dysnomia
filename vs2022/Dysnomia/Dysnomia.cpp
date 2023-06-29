#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "34_Sze.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wong* Mu = new Wong();
    Sze* Nu = new Sze(Mu);
    Sing* Upsilon = new Sing(Nu->Eta, Nu->Upsilon);
    int i = 7; 
}
