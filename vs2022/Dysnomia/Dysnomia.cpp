#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "44_에포린.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    에포린* Mu = new 에포린();

    double i = 551.131; 
}
