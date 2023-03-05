#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "28_Dang.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Dang* Mu = new Dang();
    
    int i = 99; 
}
