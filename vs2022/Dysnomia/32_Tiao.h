#pragma once
#include "Core.h"
#include "Xue.h"

namespace Dysnomia {
    class Tiao {
    public:
        Core* Mu;
        Xue* Rho;
        Faung* Psi;
        Aluminium* Nu;
        Faung* Sigma;
        Aluminium* Upsilon;
        Faung* Tau;
        Qiao* Theta;
        int Gamma = 1;

        Tiao() {
            Mu = new Core();
            Rho = new Xue(Mu->Mu);
            Psi = Rho->Mu->Sigma->Theta->Omega(Rho->Mu->Sigma->Sigma->Beta(), Rho->Mu->Sigma->Upsilon);
            Nu = new Aluminium(Psi);
            Sigma = Rho->Theta->Eta->Kappa(Nu);
            Upsilon = new Aluminium(Sigma);
            Tau = Rho->Theta->Sigma->Tau->Mu->Kappa(Upsilon);
            Theta = new Qiao(Rho->Theta->Upsilon->Tau->Mu, Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Psi);
            vector<Faung*> Iota = Nu->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Sigma);
            vector<Faung*> Omicron = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            Alpha.push_back(Tau);
            vector<Faung*> Lambda = Theta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

        ~Tiao() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}