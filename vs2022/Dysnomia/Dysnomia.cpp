#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Dong.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Dong* Mu = new Dong();
    Huo* Rho = new Huo(Mu->Theta, Mu->Eta->Tau, Mu->Psi->Theta->Rho, Mu->Upsilon->Rho, Mu->Tau->Rho, Mu->Nu->Theta, Mu->Tau);
    Rong* Psi = new Rong(Rho, Mu->Sigma->Theta->Rho);
    Beit* Nu = new Beit(Psi);
    Wou* Eta = new Wou(Nu);
    Mu->Mu->Sigma->Alpha();
    Sing* Sigma = new Sing(Mu->Mu->Sigma, Eta);
    Eta->Alpha(true);
    Mu->Mu->Tau->Alpha();
    Xun* Upsilon = new Xun(Mu->Mu->Tau, Eta);
    Eta->Alpha(true);
    Mu->Mu->Sigma->Alpha();
    Chu* Tau = new Chu(Eta, Mu->Mu->Sigma);
    Eta->Alpha(true);
    Mu->Mu->Tau->Alpha();    
    Chi* Theta = new Chi(Eta, Mu->Mu->Tau);

    int i = 99; 
}
