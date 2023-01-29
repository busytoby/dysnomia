#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "22_Chi.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wou* One = new Wou();
    Wou* Two = new Wou();
    
    Chi* Mu = new Chi(One, Two);
    Qiao* Tau = new Qiao(Mu->Psi->Mu);
    int i = 99; 
}
