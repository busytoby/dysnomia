#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "76_चंग.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    चंग* Mu = new चंग();

    cout << "चंगा\n";
}