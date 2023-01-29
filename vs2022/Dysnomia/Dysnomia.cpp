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

    vector<Affinity*> OneTauAffinities = OneTau->Affinities();
    vector<Affinity*> TwoTauAffinities = TwoTau->Affinities();
    for (int i = 0; i < OneTauAffinities.size(); i++) {
        string A = "OneTauAffinities["s + to_string(i) + "]";
        OneTauAffinities[i]->Compare(TwoTauAffinities[i], A);
    }

    vector<Affinity*> OneQiaoAffinities = OneQiao->Affinities();
    vector<Affinity*> TwoQiaoAffinities = TwoQiao->Affinities();
    for (int i = 0; i < OneQiaoAffinities.size(); i++) {
        string A = "OneQiaoAffinities["s + to_string(i) + "]";
        OneQiaoAffinities[i]->Compare(TwoQiaoAffinities[i], A);
    }

    vector<Affinity*> OneTinAffinities = OneTin->Affinities();
    vector<Affinity*> TwoTinAffinities = TwoTin->Affinities();
    for (int i = 0; i < OneTinAffinities.size(); i++) {
        string A = "OneTinAffinities["s + to_string(i) + "]";
        OneTinAffinities[i]->Compare(TwoTinAffinities[i], A);
    }

    vector<Affinity*> OnePlayerAffinities = OnePlayer->Affinities();
    vector<Affinity*> TwoPlayerAffinities = TwoPlayer->Affinities();
    for (int i = 0; i < OnePlayerAffinities.size(); i++) {
        string A = "OnePlayerAffinities["s + to_string(i) + "]";
        OnePlayerAffinities[i]->Compare(TwoPlayerAffinities[i], A);
    }

    vector<Affinity*> OneSongAffinities = OneSong->Affinities();
    vector<Affinity*> TwoSongAffinities = TwoSong->Affinities();
    for (int i = 0; i < OneSongAffinities.size(); i++) {
        string A = "OneSongAffinities["s + to_string(i) + "]";
        OneSongAffinities[i]->Compare(TwoSongAffinities[i], A);
    }

    int i = 99;
}
