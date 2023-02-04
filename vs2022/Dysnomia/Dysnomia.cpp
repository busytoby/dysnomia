#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "24_Cie.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Host* Mu = new Host();

    pair<Eun*, Iron*> Beta = Mu->Sigma->Mu->Nu->Pi();
    Tsong* Rho = Mu->Tau->Mu->Mu->Rho->Tau->Pi();

    Cie* Psi = new Cie(
        Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon,
        Mu->Tau->Mu->Eta->Upsilon->Upsilon,
        Beta.first,
        Beta.first->Psi,
        Rho,
        Mu->Sigma->Mu->Nu
    );

    Cie* Nu = new Cie(
        Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon,
        Mu->Tau->Mu->Eta->Upsilon->Upsilon,
        Beta.first,
        new Qiao(Beta.second),
        Rho,
        Psi->Theta->Rho
    );

    Cie* Eta = new Cie(
        Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon,
        Mu->Tau->Mu->Eta->Upsilon->Upsilon,
        Beta.first,
        Beta.first->Psi,
        Rho,
        Nu->Theta->Rho
    );

    Cie* Sigma = new Cie(
        Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon,
        Mu->Tau->Mu->Eta->Upsilon->Upsilon,
        Beta.first,
        Beta.first->Psi,
        Rho,
        Eta->Theta->Rho
    );

    Cie* Upsilon = new Cie(
        Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon,
        Mu->Tau->Mu->Eta->Upsilon->Upsilon,
        Beta.first,
        new Qiao(Beta.second),
        Rho,
        Sigma->Theta->Rho
    );  

    Fao* Tau = new Fao(Upsilon->Theta, Mu->Tau->Mu->Mu->Rho->Tau->Psi);
    Feng* Theta = new Feng(Tau);

    /* Too Many Matches By Here
    vector<Affinity*> MuAffinities = MuPi->Affinities();
    vector<Affinity*> RhoAffinities = EtaPi->Affinities();

    for (int i = 0; i < MuAffinities.size(); i++) {
        string A = "MuAffinities["s + to_string(i) + "]";
        MuAffinities[i]->Compare(RhoAffinities[i], A);
    }

    cout << "Set Break Point On Line 81 And Search In Debugger For Matched Pair Values\n";
    */

    int i = 99; 
}
