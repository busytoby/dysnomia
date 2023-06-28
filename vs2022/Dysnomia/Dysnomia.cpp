#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "33_Wong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wong* Mu = new Wong();
    int i = 4; 
}
