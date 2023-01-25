#include <stdlib.h>
#include <time.h>
#include "Sulphur.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Sulphur* Mu = new Sulphur();
    Aluminium* Rho = new Aluminium();
    Aluminium* Psi = new Aluminium(Mu->Theta, Mu->Upsilon->Base, Mu->Upsilon->Element, Mu->Upsilon->Manifold, Mu->Theta->Tau);
    Dynamic* Nu = Rho->Pi();
    Dynamic* Eta = Psi->Pi();
    Affinity* Sigma = new Affinity(Nu, Eta);
    Dynamic* Upsilon = Psi->Pi();
    Dynamic* Tau = Rho->Pi();
    Affinity* Theta = new Affinity(Upsilon, Tau);
}