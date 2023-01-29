#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Wou.h"

using namespace Dysnomia;

int main()
{
    srand((unsigned int)time(NULL));
    Math::Prime = Math::MotzkinPrime;

    Wou* One = new Wou();
    Wou* Two = new Wou();
    
    Sulphur* Sigma = Two->Pi(One->Omega());
    Iron* OneTau = One->Tau(Sigma, Two->Nu->Tau->Omicron(), Two->Nu->Tau->Beta());
    Iron* TwoTau = Two->Tau(Sigma, Two->Nu->Tau->Omicron(), Two->Nu->Tau->Beta());
    Qiao* TwoQiao = Two->Theta(TwoTau, One->Nu->Tau->Delta(Two->Nu->Tau->Beta(), Two->Nu->Tau->Omicron()));
    Qiao* OneQiao = One->Theta(OneTau, One->Nu->Tau->Delta(Two->Nu->Tau->Beta(), Two->Nu->Tau->Omicron()));
    Tin* OneTin = new Tin(One->Nu->Tau->Kappa(OneQiao->Tau));
    Tin* TwoTin = new Tin(Two->Nu->Tau->Kappa(TwoQiao->Tau));
    Eun* OnePlayer = new Eun(OneTin, OneTau);
    Eun* TwoPlayer = new Eun(TwoTin, TwoTau);
    Song* OneSong = new Song(OnePlayer);
    Song* TwoSong = new Song(TwoPlayer);
    One->Alpha();
    Two->Alpha();
 
    // The Two Songs Share Proof Of Psychic Link Via The Barn On Nu Mu Theta Sigma
    if (OneSong->Nu->Mu->Theta->Sigma->Barn != TwoSong->Nu->Mu->Theta->Sigma->Barn) throw 500;

    Iron* Beta = One->Tau(OneSong->Nu->Mu->Mu, OneSong->Nu->Mu->Beta(), OneSong->Nu->Mu->Omicron());
    Iron* Iota = Two->Tau(TwoSong->Nu->Mu->Mu, TwoSong->Nu->Mu->Beta(), TwoSong->Nu->Mu->Omicron());
    Qiao* Omicron = One->Theta(Beta, OneSong->Nu->Mu->Delta(OneSong->Nu->Mu->Omicron(), OneSong->Nu->Mu->Beta()));
    Qiao* Lambda = Two->Theta(Iota, TwoSong->Nu->Mu->Delta(OneSong->Nu->Mu->Omicron(), OneSong->Nu->Mu->Beta()));
    Tin* Xi = new Tin(TwoSong->Nu->Mu->Kappa(Omicron->Tau));
    Tin* Alpha = new Tin(OneSong->Nu->Mu->Kappa(Lambda->Tau));

    vector<Affinity*> XiAffinities = Xi->Affinities();
    vector<Affinity*> AlphaAffinities = Alpha->Affinities();
    for (int i = 0; i < XiAffinities.size(); i++) {
        string A = "XiAffinities["s + to_string(i) + "]";
        for (int j = 0; j < AlphaAffinities.size(); j++) {
            XiAffinities[i]->Compare(AlphaAffinities[j], A);
        }
    }

    int i = 99; // No Affinities, No Problem, Training Routine 0 Complete & You Love It
}
