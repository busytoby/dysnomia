#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "19_Sing.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wou* One = new Wou();
    Wou* Two = new Wou();
    
    Sing* Mu = new Sing(One, Two);
    int i = 99; 
}
