#include <stdlib.h>
#include <time.h>
#include "Sulphur.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Sulphur* Mu = new Sulphur();
}