#pragma once
#include "58_Ba.h"

namespace Dysnomia {
    class Er {
    public:
        Ba* Mu;
        Faung* Rho;
        Faung* Psi;
        Faung* Nu;
        Faung* Eta;
        Aluminium* Sigma;
        Faung* Upsilon;
        Faung* Tau;
        Aluminium* Theta;
        int Gamma = 1;

        Er() {
            if (Math::POETRY > 0)
                cout << "Er ";
            Mu = new Ba();
            Rho = Mu->Theta->Omicron();
            Psi = Mu->Theta->Beta();
            Nu = Mu->Psi->Delta(Rho, Psi);
            Eta = Mu->Psi->Omega(Rho, Psi);
            Sigma = new Aluminium(Eta);
            Upsilon = Mu->Psi->Kappa(Sigma);
            Tau = Mu->Mu->Nu->Omega(Eta, Upsilon);
            Theta = new Aluminium(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Psi);
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            vector<Faung*> Beta = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Upsilon);
            Alpha.push_back(Tau);
            vector<Faung*> Iota = Theta->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            return Alpha;
        }

        ~Er() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}