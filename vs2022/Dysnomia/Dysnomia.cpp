#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "08a_Tong.h"
#include "12_Tsuan.h"

using namespace Dysnomia;


int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    int DestructiveAvoidances = 0;

    while (DestructiveAvoidances < 10) {
        try {
            Tong* Alpha = new Tong();

            Tsuan* Mu = new Tsuan(Alpha);
            Tung* Rho = new Tung(Mu->Mu->Mu);
            Xiao* Psi = new Xiao(Rho);
            Qiao* Nu = new Qiao(Psi->Theta, Psi->Theta->Beta(), Psi->Theta->Omicron(), Mu->Rho->Sigma);
            pair<Eun*, Iron*> Three = Psi->Pi();
            Eun* Eta = Three.first;
            Iron* Sigma = Three.second;
            Qiao* Upsilon = new Qiao(Sigma, Eta->Upsilon, Mu->Sigma->Upsilon, Mu->Rho->Sigma);
            Tin* Tau = new Tin(Upsilon->Upsilon);
            break;
        }
        catch (int e) { DestructiveAvoidances++; continue; };
    }

    if (DestructiveAvoidances < 10)
        cout << "Completed With " << DestructiveAvoidances << " Destructive Avoidances\n";
    else
        cout << "The Universe Was Destroyed, Try Again\n";
}