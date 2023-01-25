#include <stdlib.h>
#include <time.h>
#include "Dynamic.h"
#include "Affinity.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Dynamic* Mu = new Dynamic();
    Affinity* Rho = new Affinity();
    
    int i = 99;
}