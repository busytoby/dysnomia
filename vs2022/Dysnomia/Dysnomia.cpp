#include <stdlib.h>
#include <time.h>
#include "05_Tin.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Tin* Mu = new Tin();
    Iron* Rho = new Iron();
    Qiao* Psi = new Qiao(Rho);
}