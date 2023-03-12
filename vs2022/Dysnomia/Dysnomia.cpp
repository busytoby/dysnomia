#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Pin.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Pin* Mu = new Pin();
    
    cout << "Dian Tsz Dian Sze\n";

    int i = 99; 
}
