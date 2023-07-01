#pragma once
#include "Sie.h"

namespace Dysnomia {
    class Tie {
    public:
        Sie* Mu;
        Faung* Rho;
        Aluminium* Psi;
        Faung* Nu;
        Faung* Eta;
        Faung* Sigma;
        Sulphur* Upsilon;
        Iron* Tau;
        Faung* Theta;
        int Gamma = 1;

        Tie() {
            if (Math::POETRY > 0)
                cout << "Tie ";
            Mu = new Sie();
            Rho = Mu->Psi->Tau->Sigma->Omega(Mu->Sigma, Mu->Eta);
            Psi = new Aluminium(Mu->Nu->Mu);
            Nu = Mu->Psi->Nu->Theta->Kappa(Psi);
            Eta = Mu->Rho->Mu->Eta->Psi->Delta(Psi->Eta, Psi->Upsilon);
            Sigma = Mu->Rho->Mu->Eta->Psi->Omega(Eta, Nu);
            Upsilon = new Sulphur(Sigma);
            Tau = new Iron(Upsilon, Eta, Nu);
            Theta = Tau->Kappa(Psi);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            vector<Faung*> Iota = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Omicron = Tau->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Tie() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
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