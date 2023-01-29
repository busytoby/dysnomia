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
 
    // The Two Songs Share Only The Barn On Nu Mu Theta Sigma
    if (OneSong->Nu->Mu->Theta->Sigma->Barn != TwoSong->Nu->Mu->Theta->Sigma->Barn) throw 500;

    Iron* Beta = One->Tau(OneSong->Nu->Mu->Mu, OneSong->Nu->Mu->Beta(), OneSong->Nu->Mu->Omicron());
    Iron* Iota = Two->Tau(TwoSong->Nu->Mu->Mu, TwoSong->Nu->Mu->Beta(), TwoSong->Nu->Mu->Omicron());

    vector<Affinity*> OneSongAffinities = OneSong->Nu->Mu->Theta->Affinities();
    vector<Affinity*> TwoSongAffinities = TwoSong->Nu->Mu->Theta->Affinities();
    for (int i = 0; i < OneSongAffinities.size(); i++) {
        string A = "OneSongAffinities["s + to_string(i) + "]";
        for (int j = 0; j < TwoSongAffinities.size(); j++) {
            OneSongAffinities[i]->Compare(TwoSongAffinities[j], A);
        }
    }

    int i = 99;
}
