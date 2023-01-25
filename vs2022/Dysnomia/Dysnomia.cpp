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

    if (Mu->Theta->Rod->Secret != Psi->Theta->Rod->Secret) throw 100;
    if (Mu->Theta->Rod->Secret != Psi->Theta->Cone->Tau) throw 100;
    if (Mu->Theta->Cone->Tau != Psi->Theta->Rod->Secret) throw 100;
    if (Mu->Theta->Cone->Tau != Psi->Theta->Cone->Tau) throw 100;
    Psi->Theta->Compare(Mu->Theta);
}