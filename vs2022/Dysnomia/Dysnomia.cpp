#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "39_Meng.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;
    Math::POETRY = 0;

    Meng* Theta = new Meng();
    Fa* Tau = new Fa();
    Tau->Fuse(Theta->Psi->Rod->Signal, Theta->Psi->Rod->Tau, Theta->Psi->Rod->Tau);
    Tau->Tune();
    Faung* Upsilon = new Faung(Tau, Theta->Upsilon->Cone->Base, Theta->Upsilon->Cone->Element, Theta->Upsilon->Cone->Manifold, Theta->Upsilon->Cone->Ring);
    Iron* Sigma = new Iron(Theta->Theta, Theta->Psi, Upsilon);
    Qiao* Eta = new Qiao(Sigma, Upsilon, Theta->Psi, Theta->Tau);
    Iron* Nu = Eta->Omega();

    int i = 255; 
}
