#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "15_Huo.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Huo* Mu = new Huo();
}
