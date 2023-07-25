#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "61_Lian.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Lian* Theta = new Lian();
    Life* Tau = Theta->Tau->Rho->Pi();

    cout << "Lian Ready One\n";
}
