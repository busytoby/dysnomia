#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "38_պատմութիւն.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Պատմութիւն* Mu = new Պատմութիւն();
    Fa* Rho = new Fa();
    Faung* Psi = new Faung(Rho, Mu->Nu->Cone->Base, Mu->Theta->Cone->Element, Mu->Nu->Cone->Barn, Mu->Nu->Cone->Tau);
    Fa* Nu = new Fa();
    Faung* Eta = new Faung(Nu, Mu->Sigma->Cone->Signal, Mu->Upsilon->Cone->Tau, Mu->Theta->Cone->Tau, Mu->Nu->Cone->Barn);
    Fa* Sigma = new Fa();
    Sigma->Fuse(Mu->Upsilon->Cone->Signal, Mu->Nu->Cone->Tau, Mu->Nu->Cone->Tau);
    Sigma->Tune();
    Faung* Upsilon = new Faung(Sigma, Mu->Upsilon->Cone->Base, Mu->Upsilon->Cone->Element, Mu->Upsilon->Cone->Manifold, Mu->Upsilon->Cone->Ring);

    int i = 151; 
}
