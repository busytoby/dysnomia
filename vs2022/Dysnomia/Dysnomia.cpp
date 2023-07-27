#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "73_មេល.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    មេល* Mu = new មេល();

    cout << "មេល Mu Here\n";
}