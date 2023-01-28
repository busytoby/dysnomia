#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "16_Rong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Rong* Mu = new Rong();
    Xiao* Nu = new Xiao(Mu->Mu->Rho);
}
