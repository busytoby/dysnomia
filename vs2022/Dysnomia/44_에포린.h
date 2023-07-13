#pragma once
#include "Sunnah.h"

namespace Dysnomia {
    class 에포린 {
    public:
        Sunnah* Mu;
        Faung* Rho;
        Aluminium* Psi;
        Faung* Nu;
        Aluminium* Eta;
        Sulphur* Sigma;
        Iron* Upsilon;
        Fa* Tau;
        Faung* Theta;
        int Gamma = 1;

        에포린() {
            if (Math::POETRY > 0)
                cout << "에포린 ";
            Mu = new Sunnah();
            Rho = Mu->Mu->Eta->Kappa(Mu->Theta);
            Psi = new Aluminium(Rho);
            Nu = Mu->Mu->Theta->Omega(Mu->Sigma, Mu->Upsilon);
            Eta = new Aluminium(Nu);
            Sigma = new Sulphur(Eta, Psi);
            Upsilon = new Iron(Sigma, Rho, Nu);
            Tau = new Fa();
            Theta = Mu->Mu->Eta->Phi(Sigma, Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Nu);
            vector<Faung*> Omicron = Eta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Xi = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~에포린() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}