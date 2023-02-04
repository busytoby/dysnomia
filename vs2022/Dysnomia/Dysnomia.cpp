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

    Fuang* Mu = new Fuang();
    
    int i = 99; 
}
