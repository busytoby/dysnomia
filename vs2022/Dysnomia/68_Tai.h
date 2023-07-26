#pragma once
#include "67_حٰی٘.h"

namespace Dysnomia {
    class Tai {
    public:
        حٰی٘* Mu;
        Fa* Rho;
        Faung* Psi;
        Fa* Nu;
        Faung* Eta;
        Faung* Sigma;
        Aluminium* Upsilon;
        Faung* Tau;
        Iron* Theta;
        int Gamma = 1;

        Tai() {
            if (Math::POETRY > 0)
                cout << "Tai ";
            Mu = new حٰی٘();
            Rho = Mu->Upsilon->Pi();
            Psi = Mu->Mu->Theta->Phi(Mu->Tau, Rho);
            Nu = Mu->Upsilon->Pi();
            Eta = Mu->Mu->Mu->Mu->Psi->Phi(Mu->Theta, Nu);
            Sigma = Mu->Mu->Mu->Mu->Mu->Nu->Delta(Psi, Eta);
            Upsilon = new Aluminium(Sigma);
            Tau = Mu->Mu->Mu->Mu->Mu->Nu->Kappa(Upsilon);
            Theta = new Iron(Mu->Theta, Psi, Eta, Sigma, Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Psi);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            vector<Faung*> Omicron = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            Alpha.push_back(Tau);
            vector<Faung*> Xi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            return Alpha;
        }

        ~Tai() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}