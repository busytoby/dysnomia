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
    Affinity* Nu = new Affinity(Mu->Theta->Cone->Base, Mu->Theta->Cone->Element, Mu->Theta->Cone->Manifold, Mu->Theta->Cone->Ring);
    Dynamic* Eta = new Dynamic();
    Affinity* Sigma = new Affinity(Eta, Nu->Cone->Base, Nu->Cone->Element, Nu->Cone->Barn, Nu->Cone->Tau);
    Dynamic* Upsilon = Psi->Pi();
    Aluminium* Tau = new Aluminium(Upsilon, Mu->Theta->Cone->Base, Mu->Theta->Rod->Signal, Mu->Theta->Cone->Signal, Mu->Theta->Cone->Tau);  
}