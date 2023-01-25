#include <stdlib.h>
#include <time.h>
#include "03_Iron.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Iron* Mu = new Iron();
    Affinity* Rho = Mu->Omicron();
    Affinity* Psi = Mu->Beta();
    Affinity* Nu = Mu->Delta(Rho, Psi);
}