#pragma once
#include "演.h"

namespace Dysnomia {
    class 行 {
    public:
        演* Mu;
        Faung* Rho;
        Faung* Psi;
        Faung* Nu;
        Aluminium* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Faung* Tau;
        Aluminium* Theta;
        int Gamma = 1;

        行() {
            if (Math::POETRY > 0)
                cout << "行 ";
            Mu = new 演();
            Rho = Mu->Mu->Theta->Beta();
            Psi = Mu->Upsilon->Omicron();
            Nu = Mu->Theta->Omega(Rho, Psi);
            Eta = new Aluminium(Nu);
            Sigma = Mu->Mu->Mu->Theta->Beta();
            Upsilon = Mu->Theta->Delta(Rho, Psi);
            Tau = Mu->Theta->Omega(Sigma, Upsilon);
            Theta = new Aluminium(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Psi);
            Alpha.push_back(Nu);
            vector<Faung*> Beta = Eta->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            Alpha.push_back(Tau);
            vector<Faung*> Omicron = Theta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            return Alpha;
        }

        ~行() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}