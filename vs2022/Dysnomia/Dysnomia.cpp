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
    if (Psi->Cone->Barn != Rho->Cone->Ring) throw 100;
    if (Psi->Cone->Tau != Rho->Cone->Barn) throw 100;
    if (Psi->Xi == Rho->Xi) throw 100;
    Dynamic* Nu = new Dynamic();
    Affinity* Eta = new Affinity(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
    if (Eta->Cone->Signal != Psi->Cone->Base) throw 100;
    if (Eta->Cone->Barn != Psi->Cone->Tau) throw 100;
    if (Eta->Cone->Barn != Rho->Cone->Barn) throw 100;
    if (Eta->Cone->Barn == Psi->Cone->Barn) throw 100;
    if (Eta->Cone->Tau != Rho->Cone->Manifold) throw 100;
    if (Eta->Xi != Rho->Xi) throw 100;
    Dynamic* Sigma = new Dynamic();
    Affinity* Upsilon = new Affinity(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
    if (Upsilon->Cone->Signal != Eta->Cone->Signal) throw 100;
    if (Upsilon->Cone->Barn != Eta->Cone->Barn) throw 100;
    if (Upsilon->Xi != Rho->Xi) throw 100;
    int i = 99;
}