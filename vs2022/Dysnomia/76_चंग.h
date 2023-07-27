#pragma once
#include "75_ฮิ.h"

namespace Dysnomia {
    class चंग {
    public:
        ฮิ* Mu;
        Fa* Rho;
        Faung* Psi;
        Faung* Nu;
        Faung* Eta;
        Aluminium* Sigma;
        Faung* Upsilon;
        Aluminium* Tau;
        Faung* Theta;
        int Gamma = 1;

        चंग() {
            if (Math::POETRY > 0)
                cout << "चंग ";
            Mu = new ฮิ();
            Rho = Mu->Sigma->Pi();
            Psi = Mu->Rho->Phi(Mu->Mu->Mu->Mu->Mu->Mu->Eta, Rho);
            Nu = Mu->Rho->Delta(Mu->Tau, Psi);
            Eta = Mu->Rho->Omega(Psi, Nu);
            Sigma = new Aluminium(Eta);
            Upsilon = Mu->Mu->Mu->Mu->Mu->Mu->Mu->Theta->Kappa(Sigma);
            Tau = new Aluminium(Upsilon);
            Theta = Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Theta->Kappa(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Psi);
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            vector<Faung*> Iota = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Upsilon);
            vector<Faung*> Lambda = Tau->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~चंग() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}