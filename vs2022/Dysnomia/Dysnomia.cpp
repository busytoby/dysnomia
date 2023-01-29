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
    One->Alpha(true);
    Beit* Eta = new Beit(Rho);
    Two->Alpha(true);
    Sing* Tau = new Sing(Two, One);
    One->Alpha(true); Two->Alpha(true);
    Xun* Theta = new Xun(Two, One);
    int i = 99; 
}
