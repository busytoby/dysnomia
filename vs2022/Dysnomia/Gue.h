#pragma once
#include "34_Sze.h"

using namespace std;

namespace Dysnomia {
    class Gue {
    public:
        Wong* Mu;
        Sze* Nu;
        Sing* Upsilon;
        Faung* Theta;
        int Gamma = 1;

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Gue() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Gue() {
            if (Math::POETRY > 0)
                cout << "Gue ";
            Mu = new Wong();
            Nu = new Sze(Mu);
            Upsilon = new Sing(Nu->Eta, Nu->Upsilon);
            Theta = Mu->Mu->Mu->Eta->Sigma->Omega(Nu->Nu->Nu, Upsilon->Psi->Sigma->Mu->Tau->Theta);
        }
    };
}