#pragma once
#include "62_Quo.h"

namespace Dysnomia {
    class 큰 {
    public:
        Quo* Theta;
        Faung* Tau;
        Faung* Upsilon;
        Faung* Sigma;
        Sulphur* Eta;
        Iron* Nu;
        Faung* Psi;
        Faung* Rho;
        Faung* Mu;
        int Gamma = 1;

        큰() {
            if (Math::POETRY > 0)
                cout << "큰 ";
            Theta = new Quo();
            Tau = Theta->Upsilon->Kappa(Theta->Mu);
            Upsilon = Theta->Tau->Theta->Tau->Kappa(Theta->Mu);
            Sigma = Theta->Theta->Upsilon->Nu->Sigma->Omega(Tau, Upsilon);
            Eta = new Sulphur(Sigma);
            Nu = new Iron(Eta, Sigma, Upsilon, Tau, Theta->Theta->Mu->Nu);
            Psi = Nu->Omicron();
            Rho = Nu->Beta();
            Mu = Nu->Delta(Psi, Rho);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Theta->Affinities());
            Alpha.push_back(Tau);
            Alpha.push_back(Upsilon);
            Alpha.push_back(Sigma);
            vector<Faung*> Iota = Eta->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Beta = Nu->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Psi);
            Alpha.push_back(Rho);
            Alpha.push_back(Mu);
            return Alpha;
        }

        ~큰() {
            if (Mu->Rod->Gamma <= 1 && Mu->Cone->Gamma <= 1) delete Mu; else { Mu->Rod->Gamma--; Mu->Cone->Gamma--; }
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
        }
    };
}