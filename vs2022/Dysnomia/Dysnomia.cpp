#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "70_Kong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Kong* Mu = new Kong();

    cout << "Kong The Player Reaper\n";
}