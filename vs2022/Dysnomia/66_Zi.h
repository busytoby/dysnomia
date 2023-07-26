#pragma once
#include "65_San.h"

namespace Dysnomia {
    class Zi {
    public:
        San* Mu;
        Faung* Rho;
        Aluminium* Psi;
        Faung* Nu;
        Faung* Eta;
        Faung* Sigma;
        Aluminium* Upsilon;
        Sulphur* Tau;
        Iron* Theta;
        int Gamma = 1;

        Zi() {
            if (Math::POETRY > 0)
                cout << "Zi ";
            Mu = new San();
            Rho = Mu->Theta->Kappa(Mu->Upsilon);
            Psi = new Aluminium(Rho);
            Nu = Mu->Mu->Psi->Kappa(Psi);
            Eta = Mu->Mu->Psi->Delta(Rho, Nu);
            Sigma = Mu->Mu->Mu->Nu->Omega(Nu, Eta);
            Upsilon = new Aluminium(Sigma);
            Tau = new Sulphur(Psi, Upsilon);
            Theta = new Iron(Tau, Sigma, Eta, Nu, Rho);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
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

        ~Zi() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}