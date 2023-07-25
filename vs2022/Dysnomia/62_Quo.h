#pragma once
#include "61_Lian.h"

namespace Dysnomia {
    class Quo {
    public:
        Lian* Theta;
        Life* Tau;
        Iron* Upsilon;
        Faung* Sigma;
        Aluminium* Eta;
        Faung* Nu;
        Faung* Psi;
        Faung* Rho;
        Aluminium* Mu;
        int Gamma = 1;

        Quo() {
            if (Math::POETRY > 0)
                cout << "Quo ";
            Theta = new Lian();
            Tau = Theta->Tau->Rho->Pi();
            Upsilon = Theta->Rho->Nu->Omega();
            Sigma = Tau->Sigma->Theta->Delta(Theta->Mu->Sigma, Tau->Theta->Mu->Theta);
            Eta = new Aluminium(Sigma);
            Nu = Upsilon->Kappa(Eta);
            Psi = Theta->Upsilon->Nu->Sigma->Kappa(Eta);
            Rho = Tau->Nu->Delta(Nu, Psi);
            Mu = new Aluminium(Rho);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Psi);
            Alpha.push_back(Nu);
            vector<Faung*> Beta = Eta->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Sigma);
            vector<Faung*> Iota = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Xi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Faung*> Delta = Theta->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            return Alpha;
        }

        ~Quo() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;            
        }
    };
}