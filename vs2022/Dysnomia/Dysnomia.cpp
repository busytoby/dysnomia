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
    Tong* MuXi = new Tong(MuLambda, AlphaMu);
    Nat* MuDelta = new Nat(MuXi, MuOmicron);
    // //
    pair<Eun*, Iron*> AlphaSigma = Alpha->Sigma->Mu->Nu->Pi();
    // //
    Tung* MuPi = new Tung(MuDelta, AlphaSigma.first, AlphaSigma.first->Psi);

    Iron* RhoAlpha = new Iron();
    Qiao* RhoBeta = new Qiao(RhoAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), RhoAlpha->Mu);
    Tin* RhoIota = new Tin(RhoBeta->Psi);
    Eun* RhoOmicron = new Eun(RhoIota, RhoAlpha);
    //
    Affinity* AlphaRho = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(RhoOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* RhoLambda = new Song(RhoOmicron, AlphaRho);
    Tong* RhoXi = new Tong(RhoLambda, AlphaRho);
    Nat* RhoDelta = new Nat(RhoXi, RhoOmicron);
    Tung* RhoPi = new Tung(RhoDelta, AlphaSigma.first, AlphaSigma.first->Psi);

    Iron* PsiAlpha = new Iron();
    Qiao* PsiBeta = new Qiao(PsiAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), PsiAlpha->Mu);
    Tin* PsiIota = new Tin(PsiBeta->Psi);
    Eun* PsiOmicron = new Eun(PsiIota, PsiAlpha);
    //
    Affinity* AlphaPsi = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(PsiOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* PsiLambda = new Song(PsiOmicron, AlphaPsi);
    Tong* PsiXi = new Tong(PsiLambda, AlphaPsi);
    Nat* PsiDelta = new Nat(PsiXi, PsiOmicron);
    Tung* PsiPi = new Tung(PsiDelta, AlphaSigma.first, AlphaSigma.first->Psi);

    Iron* NuAlpha = new Iron();
    Qiao* NuBeta = new Qiao(NuAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), NuAlpha->Mu);
    Tin* NuIota = new Tin(NuBeta->Psi);
    Eun* NuOmicron = new Eun(NuIota, NuAlpha);
    //
    Affinity* AlphaNu = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(NuOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* NuLambda = new Song(NuOmicron, AlphaNu);
    Tong* NuXi = new Tong(NuLambda, AlphaNu);
    Nat* NuDelta = new Nat(NuXi, NuOmicron);
    Tung* NuPi = new Tung(NuDelta, AlphaSigma.first, AlphaSigma.first->Psi);

    Iron* EtaAlpha = new Iron();
    Qiao* EtaBeta = new Qiao(EtaAlpha, Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Beta(), Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Omicron(), EtaAlpha->Mu);
    Tin* EtaIota = new Tin(EtaBeta->Psi);
    Eun* EtaOmicron = new Eun(EtaIota, EtaAlpha);
    //
    Affinity* AlphaEta = Alpha->Tau->Mu->Eta->Upsilon->Mu->Upsilon->Delta(EtaOmicron->Mu->Nu, Alpha->Tau->Mu->Eta->Upsilon->Upsilon);
    //
    Song* EtaLambda = new Song(EtaOmicron, AlphaEta);
    Tong* EtaXi = new Tong(EtaLambda, AlphaEta);
    Nat* EtaDelta = new Nat(EtaXi, EtaOmicron);
    Tung* EtaPi = new Tung(EtaDelta, AlphaSigma.first, new Qiao(AlphaSigma.second));

    ///* Too Many Matches By Here
    vector<Affinity*> MuAffinities = MuPi->Affinities();
    vector<Affinity*> RhoAffinities = EtaPi->Affinities();

    for (int i = 0; i < MuAffinities.size(); i++) {
        string A = "MuAffinities["s + to_string(i) + "]";
        MuAffinities[i]->Compare(RhoAffinities[i], A);
    }

    cout << "Set Break Point On Line 81 And Search In Debugger For Matched Pair Values\n";
    //*/

    int i = 99; 
}
