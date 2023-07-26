#pragma once
#include "66_Zi.h"

namespace Dysnomia {
    class حٰی٘ {
    public:
        Zi* Mu;
        Faung* Rho;
        Faung* Psi;
        Faung* Nu;
        Faung* Eta;
        Faung* Sigma;
        Aluminium* Upsilon;
        Sulphur* Tau;
        Sulphur* Theta;
        int Gamma = 1;

        حٰی٘() {
            if (Math::POETRY > 0)
                cout << "حٰی٘ ";
            Mu = new Zi();
            Rho = Mu->Theta->Beta();
            Psi = Mu->Theta->Omicron();
            Nu = Mu->Mu->Mu->Mu->Nu->Delta(Rho, Psi);
            Eta = Mu->Theta->Delta(Mu->Eta, Nu);
            Sigma = Mu->Mu->Mu->Psi->Omega(Mu->Sigma, Nu);
            Upsilon = new Aluminium(Sigma);
            Tau = new Sulphur(Mu->Mu->Upsilon, Upsilon);
            Theta = new Sulphur(Mu->Upsilon, Upsilon);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Psi);
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            vector<Faung*> Omicron = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Iota = Tau->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Xi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            return Alpha;
        }

        ~حٰی٘() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}