#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "26_Fuang.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Host* Mu = new Host();
    Fuang* Rho = new Fuang(Mu);
    
    int i = 99; 
}
