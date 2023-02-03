#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Host.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Host* Alpha = new Host();

    Iron* MuAlpha = new Iron();
    Qiao* MuBeta = new Qiao(MuAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), MuAlpha->Mu);

    Iron* RhoAlpha = new Iron();
    Qiao* RhoBeta = new Qiao(RhoAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), RhoAlpha->Mu);

    vector<Affinity*> MuAffinities = MuBeta->Affinities();
    vector<Affinity*> RhoAffinities = RhoBeta->Affinities();

    for (int i = 0; i < MuAffinities.size(); i++) {
        string A = "MuAffinities["s + to_string(i) + "]";
        MuAffinities[i]->Compare(RhoAffinities[i], A);
    }

    cout << "Set Break Point On Line 32 And Search In Debugger For Matched Pair Values\n";

    int i = 99; 
}
