#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "75_ฮิ.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    ฮิ* Mu = new ฮิ();
    Fa* Rho = Mu->Sigma->Pi();

    cout << "ށީ ฮ๊ ?\n";
}