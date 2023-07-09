#pragma once
#include "41_Gua.h"

namespace Dysnomia {
    class 剝 {
    public:
        Gua* Mu;
        Aluminium* Rho;
        Faung* Psi;
        Faung* Nu;
        Iron* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Sulphur* Tau;
        Iron* Theta;
        int Gamma = 1;

        剝() {
            if (Math::POETRY > 0)
                cout << "剝 ";
            Mu = new Gua();
            Rho = new Aluminium(Mu->Tau);
            Psi = Mu->Eta->Kappa(Rho);
            Nu = Mu->Mu->Nu->Delta(Mu->Tau, Psi);
            Eta = new Iron(Mu->Nu, Mu->Mu->Psi->Beta(), Nu);
            Sigma = Mu->Eta->Delta(Eta->Beta(), Eta->Omicron());
            Upsilon = Eta->Delta(Eta->Beta(), Eta->Omicron());
            Tau = new Sulphur(Upsilon);
            Theta = new Iron(Tau, Upsilon, Sigma);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Psi);
            Alpha.push_back(Nu);
            vector<Faung*> Iota = Eta->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            vector<Faung*> Omicron = Theta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            return Alpha;
        }

        ~剝() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}