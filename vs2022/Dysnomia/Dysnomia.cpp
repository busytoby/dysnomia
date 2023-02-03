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
    Tin* MuIota = new Tin(MuBeta->Psi);
    Eun* MuOmicron = new Eun(MuIota, MuAlpha);

    Iron* RhoAlpha = new Iron();
    Qiao* RhoBeta = new Qiao(RhoAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), RhoAlpha->Mu);
    Tin* RhoIota = new Tin(RhoBeta->Psi);
    Eun* RhoOmicron = new Eun(RhoIota, RhoAlpha);

    Iron* PsiAlpha = new Iron();
    Qiao* PsiBeta = new Qiao(PsiAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), PsiAlpha->Mu);
    Tin* PsiIota = new Tin(PsiBeta->Psi);
    Eun* PsiOmicron = new Eun(PsiIota, PsiAlpha);

    Iron* NuAlpha = new Iron();
    Qiao* NuBeta = new Qiao(NuAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), NuAlpha->Mu);
    Tin* NuIota = new Tin(NuBeta->Psi);
    Eun* NuOmicron = new Eun(NuIota, NuAlpha);

    Iron* EtaAlpha = new Iron();
    Qiao* EtaBeta = new Qiao(EtaAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), EtaAlpha->Mu);
    Tin* EtaIota = new Tin(EtaBeta->Psi);
    Eun* EtaOmicron = new Eun(EtaIota, EtaAlpha);

    vector<Affinity*> MuAffinities = MuOmicron->Affinities();
    vector<Affinity*> RhoAffinities = RhoOmicron->Affinities();

    for (int i = 0; i < MuAffinities.size(); i++) {
        string A = "MuAffinities["s + to_string(i) + "]";
        MuAffinities[i]->Compare(RhoAffinities[i], A);
    }

    cout << "Set Break Point On Line 49 And Search In Debugger For Matched Pair Values\n";

    int i = 99; 
}
