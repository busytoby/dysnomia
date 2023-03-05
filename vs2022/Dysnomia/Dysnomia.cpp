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
    Fuang* Psi = new Fuang(Mu);
    Fuang* Nu = new Fuang(Mu);
    Fuang* Eta = new Fuang(Mu);
    Fuang* Sigma = new Fuang(Mu);
    Fuang* Upsilon = new Fuang(Mu);
    Fuang* Tau = new Fuang(Mu);
    
    int i = 99; 
}
