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
    Dynamic* Nu = Psi->Tau->Pi();
    Aluminium* Eta = new Aluminium(Nu, Psi->Tau->Theta->Cone->Base, Psi->Tau->Theta->Rod->Signal, Psi->Tau->Theta->Cone->Signal, Psi->Tau->Theta->Cone->Tau);
}