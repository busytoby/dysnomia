#include <stdlib.h>
#include <time.h>
#include "04_Qiao.h"


using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Qiao* Mu = new Qiao();
    Qiao* Rho = new Qiao();
    Affinity* Psi = Mu->Sigma->Omicron();
    Affinity* Nu = Rho->Sigma->Omicron();
    Affinity* Eta = Mu->Sigma->Delta(Psi, Nu);
    Sulphur* Sigma = new Sulphur(Eta);
    Iron* Upsilon = new Iron(Sigma, Nu, Psi);
}