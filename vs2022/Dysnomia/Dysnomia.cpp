#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "71_Fang.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Fang* Mu = new Fang();

    cout << "Kong Fang Mindfulness\n";
}