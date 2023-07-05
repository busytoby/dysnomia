#pragma once
#include "40_En.h"

namespace Dysnomia {
    class Gua {
    public:
        En* Mu;
        Faung* Rho;
        Aluminium* Psi;
        Sulphur* Nu;
        Iron* Eta;
        Faung* Sigma;
        Iron* Upsilon;
        Faung* Tau;
        Iron* Theta;
        int Gamma = 1;

        Gua() {
            if (Math::POETRY > 0)
                cout << "Gua ";
            Mu = new En();
            Rho = Mu->Sigma->Delta(Mu->Mu->Rho, Mu->Upsilon);
            Psi = new Aluminium(Rho);
            Nu = new Sulphur(Psi->Theta);
            Eta = new Iron(Nu, Psi->Rho, Psi->Psi, Psi->Eta, Psi->Upsilon);
            Sigma = Mu->Nu->Omega(Psi->Psi, Mu->Sigma->Omicron());
            Upsilon = new Iron(Nu, Mu->Sigma->Beta(), Sigma);
            Tau = Upsilon->Kappa(Psi);
            Theta = new Iron(Nu, Tau, Mu->Psi->Omicron());
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Nu->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Omicron = Eta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            Alpha.push_back(Sigma);
            vector<Faung*> Lambda = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            Alpha.push_back(Tau);
            vector<Faung*> Xi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            return Alpha;
        }

        ~Gua() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}