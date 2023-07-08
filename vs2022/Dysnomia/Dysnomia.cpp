#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "42_Skin.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Skin* Mu = new Skin();

    int i = 453; 
}
