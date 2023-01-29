#pragma once
#include "21_Chu.h"

using namespace std;

namespace Dysnomia {
    class Chi {
    public:
        Chu* Mu;
        Qiao* Psi;
        Eun* Nu;
        int Gamma = 1;

        Chi(Wou* Beta, Wou* Iota) {
            Mu = new Chu(Beta, Iota);
            Psi = new Qiao(Mu->Eta->Upsilon->Theta, Mu->Eta->Eta->Rho, Mu->Eta->Mu->Psi->Eta, Mu->Theta->Mu->Mu);
            Nu = new Eun(Psi->Theta);
        }

        vector<Affinity*> Affinities() {
            vector<Affinity*> Alpha(Mu->Affinities());
            vector<Affinity*> Omicron = Psi->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Affinity*> Lambda = Nu->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

        ~Chi() {
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}