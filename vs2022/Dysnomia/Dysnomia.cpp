#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Ong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Ong* Mu = new Ong();

    cout << "Ready";
}
