#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "69_Ton.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Ton* Mu = new Ton();

    cout << "Playing FTW\n";
}