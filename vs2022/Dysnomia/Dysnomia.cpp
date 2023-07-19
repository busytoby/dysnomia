#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "54_Gui.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Gui* Mu = new Gui();

    cout << "Ready Yi 2";
}
