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
    Affinity* Psi = new Affinity(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
    if (Rho->Cone->Ring != Psi->Cone->Barn) throw 100;
    if (Psi->Cone->Tau != Rho->Cone->Barn) throw 100;
    Dynamic* Nu = new Dynamic();


    int i = 99;
}