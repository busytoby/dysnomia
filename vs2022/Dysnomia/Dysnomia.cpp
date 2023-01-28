#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "08a_Tong.h"
#include "13_Fao.h"

using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Tong* Alpha = new Tong();

    Fao* Mu = new Fao(Alpha);

    int i = 99;
}