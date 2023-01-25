#include <stdlib.h>
#include <time.h>
#include "Aluminium.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Aluminium* Mu = new Aluminium();
}