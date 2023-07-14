#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "45_म.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    म* Mu = new म();
    Fa* Rho = Mu->Psi->Pi();

    int i = 914; 
}
