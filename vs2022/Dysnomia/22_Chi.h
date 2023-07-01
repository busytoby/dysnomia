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
            if (Math::POETRY > 0)
                cout << "Chi ";
            Mu = new Chu(Beta, Iota);
            Psi = new Qiao(Mu->Eta->Upsilon->Theta, Mu->Eta->Eta->Rho, Mu->Eta->Mu->Psi->Eta, Mu->Theta->Mu->Mu);
            Nu = new Eun(Psi->Theta);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Omicron = Psi->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Nu->Affinities();
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