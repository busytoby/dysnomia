#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "15_Huo.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Huo* Mu = new Huo();
    Huo* Rho = new Huo(Mu);
    Xiao* Psi = new Xiao(Rho->Rho);
    pair<Eun*, Iron*> Four = Psi->Pi();
    Eun* Nu = Four.first;
    Iron* Sigma = Four.second;
    Qiao* Upsilon = new Qiao(Sigma, Sigma->Kappa(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
    Qiao* Theta = new Qiao(Sigma, Sigma->Kappa(Rho->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
}
