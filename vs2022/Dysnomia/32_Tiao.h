#pragma once
#include "Core.h"
#include "Xue.h"

namespace Dysnomia {
    class Tiao {
    public:
        Core* Mu;
        Xue* Rho;
        Faung* Psi;
        Faung* Sigma;
        Faung* Tau;
        Qiao* Theta;
        int Gamma = 1;

        Tiao() {
            Core* Mu = new Core();
            Xue* Rho = new Xue(Mu->Mu);
            Faung* Psi = Rho->Mu->Sigma->Theta->Omega(Rho->Mu->Sigma->Sigma->Beta(), Rho->Mu->Sigma->Upsilon);
            Faung* Sigma = Rho->Theta->Eta->Kappa(new Aluminium(Psi));
            Faung* Tau = Rho->Theta->Sigma->Tau->Mu->Kappa(new Aluminium(Sigma));
            Qiao* Theta = new Qiao(Rho->Theta->Upsilon->Tau->Mu, Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Psi);
            Alpha.push_back(Sigma);
            Alpha.push_back(Tau);
            vector<Faung*> Lambda = Theta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

        ~Tiao() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}