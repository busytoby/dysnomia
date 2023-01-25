#include <stdlib.h>
#include <time.h>
#include "Aluminium.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Aluminium* Mu = new Aluminium();
    Dynamic* Rho = Mu->Pi();
    Aluminium* Psi = new Aluminium(Rho, Mu->Theta->Cone->Base, Mu->Theta->Rod->Signal, Mu->Theta->Cone->Signal, Mu->Theta->Cone->Tau);
}