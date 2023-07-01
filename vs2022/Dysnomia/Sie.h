#pragma once
#include "35_Tue.h"

namespace Dysnomia {
    class Sie {
    public:
        Gue* Rho;
        Xun* Psi;
        Tue* Nu;
        Faung* Eta;
        Faung* Sigma;
        int Gamma = 1;

        Sie() {
            if (Math::POETRY > 0)
                cout << "Sie ";
            Rho = new Gue();
            Rho->Nu->Upsilon->Alpha();
            Rho->Nu->Eta->Alpha();
            Psi = new Xun(Rho->Nu->Upsilon, Rho->Nu->Eta);
            Nu = new Tue(Rho->Upsilon->Rho->Omega(Rho->Nu->Upsilon->Mu->Upsilon->Theta->Beta(), Rho->Nu->Upsilon->Mu->Upsilon->Theta->Omicron()));
            Eta = new Faung();
            Sigma = Psi->Theta->Tau->Sigma->Omega(Nu->Theta, Eta);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Rho->Affinities());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Nu->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            return Alpha;
        }

        ~Sie() {
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
        }
    };
}