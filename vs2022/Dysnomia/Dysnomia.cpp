#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "20_Xun.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wou* One = new Wou();
    Wou* Two = new Wou();
    
    Xun* Mu = new Xun(One, Two);
    Rong* Rho = new Rong(Mu->Theta);
    Beit* Eta = new Beit(Rho);
    Sing* Tau = new Sing(Two, One);
    int i = 99; 
}
