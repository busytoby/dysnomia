#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Core.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Core* Mu = new Core();
    Mu->Mu->Delta();
    cout << "Dian Sze Tsz Dian Tsz Sze\n";
    int i = 99; 
}
