#include <stdlib.h>
#include <time.h>
#include "04_Qiao.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Qiao* Mu = new Qiao();
}