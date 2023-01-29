#pragma once
#include "20_Xun.h"

using namespace std;

namespace Dysnomia {
    class Chu {
    public:
        Xun* Mu;
        Rong* Rho;
        Beit* Eta;
        Sing* Tau;
        Xun* Theta;
        int Gamma = 1;

        Chu(Wou* Beta, Wou* Iota) {
            Mu = new Xun(Beta, Iota);
            Rho = new Rong(Mu->Theta);
            Beta->Alpha(true);
            Eta = new Beit(Rho);
            Iota->Alpha(true);
            Tau = new Sing(Iota, Beta);
            Beta->Alpha(true); Iota->Alpha(true);
            Theta = new Xun(Iota, Beta);
        }

        vector<Affinity*> Affinities() {
            vector<Affinity*> Alpha(Mu->Affinities());
            vector<Affinity*> Omicron = Rho->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Affinity*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Affinity*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Affinity*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Chu() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}