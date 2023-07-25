#pragma once
#include "큰.h"

namespace Dysnomia {
    class Seol {
    public:
        큰* Mu;
        Sulphur* Rho;
        Iron* Psi;
        Faung* Nu;
        Faung* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Aluminium* Tau;
        Faung* Theta;
        int Gamma = 1;

        Seol() {
            if (Math::POETRY > 0)
                cout << "Seol ";
            Mu = new 큰();
            Rho = new Sulphur(Mu->Mu, Mu->Rho, Mu->Psi, Mu->Upsilon);
            Psi = new Iron(Rho, Mu->Tau, Mu->Eta->Sigma);
            Nu = Psi->Beta();
            Eta = Psi->Omicron();
            Sigma = Psi->Delta(Nu, Eta);
            Upsilon = Psi->Omega(Nu, Eta);
            Tau = new Aluminium(Upsilon);
            Theta = Psi->Kappa(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Omicron = Rho->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            vector<Faung*> Xi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Seol() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}