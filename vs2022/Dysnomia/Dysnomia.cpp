#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "72_Ixtli.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Ixtli* Mu = new Ixtli();
    Fa* Rho = Mu->Theta->Pi();

    cout << "Looking\n";
}