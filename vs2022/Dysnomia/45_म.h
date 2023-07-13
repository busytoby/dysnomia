#pragma once
#include "44_에포린.h"

namespace Dysnomia {
    class म {
    public:
        에포린* Mu;
        Faung* Rho;
        Aluminium* Psi;
        Faung* Nu;
        Faung* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Faung* Tau;
        Faung* Theta;
        int Gamma = 1;

        म() {
            if (Math::POETRY > 0)
                cout << "म ";
            Mu = new 에포린();
            Rho = Mu->Upsilon->Delta(Mu->Theta, Mu->Nu);
            Psi = new Aluminium(Rho);
            Nu = Mu->Upsilon->Kappa(Psi);
            Eta = Mu->Mu->Mu->Theta->Kappa(Psi);
            Sigma = Mu->Mu->Mu->Theta->Delta(Nu, Eta);
            Upsilon = Mu->Mu->Mu->Theta->Delta(Eta, Nu);
            Tau = Mu->Mu->Mu->Eta->Omega(Sigma, Nu);
            Theta = Mu->Mu->Mu->Eta->Omega(Upsilon, Eta);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            Alpha.push_back(Tau);
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~म() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}