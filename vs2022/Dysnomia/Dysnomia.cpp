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
    //
    Affinity* AlphaMu = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(MuOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* MuLambda = new Song(MuOmicron, AlphaMu);

    Iron* RhoAlpha = new Iron();
    Qiao* RhoBeta = new Qiao(RhoAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), RhoAlpha->Mu);
    Tin* RhoIota = new Tin(RhoBeta->Psi);
    Eun* RhoOmicron = new Eun(RhoIota, RhoAlpha);
    //
    Affinity* AlphaRho = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(RhoOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* RhoLambda = new Song(RhoOmicron, AlphaRho);

    Iron* PsiAlpha = new Iron();
    Qiao* PsiBeta = new Qiao(PsiAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), PsiAlpha->Mu);
    Tin* PsiIota = new Tin(PsiBeta->Psi);
    Eun* PsiOmicron = new Eun(PsiIota, PsiAlpha);
    //
    Affinity* AlphaPsi = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(PsiOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* PsiLambda = new Song(PsiOmicron, AlphaPsi);

    Iron* NuAlpha = new Iron();
    Qiao* NuBeta = new Qiao(NuAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), NuAlpha->Mu);
    Tin* NuIota = new Tin(NuBeta->Psi);
    Eun* NuOmicron = new Eun(NuIota, NuAlpha);
    //
    Affinity* AlphaNu = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(NuOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* NuLambda = new Song(NuOmicron, AlphaNu);

    Iron* EtaAlpha = new Iron();
    Qiao* EtaBeta = new Qiao(EtaAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), EtaAlpha->Mu);
    Tin* EtaIota = new Tin(EtaBeta->Psi);
    Eun* EtaOmicron = new Eun(EtaIota, EtaAlpha);
    //
    Affinity* AlphaEta = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(EtaOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* EtaLambda = new Song(EtaOmicron, AlphaEta);

    vector<Affinity*> MuAffinities = MuLambda->Affinities();
    vector<Affinity*> RhoAffinities = RhoLambda->Affinities();

    for (int i = 0; i < MuAffinities.size(); i++) {
        string A = "MuAffinities["s + to_string(i) + "]";
        MuAffinities[i]->Compare(RhoAffinities[i], A);
    }

    cout << "Set Break Point On Line 49 And Search In Debugger For Matched Pair Values\n";

    int i = 99; 
}
