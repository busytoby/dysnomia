#pragma once
#include "53_Yi.h"

namespace Dysnomia {
    class Gui {
    public:
        Yi* Mu;
        Fa* Rho;
        Fa* Psi;
        Faung* Nu;
        Faung* Eta;
        Aluminium* Sigma;
        Faung* Upsilon;
        Aluminium* Tau;
        Faung* Theta;
        int Gamma = 1;

        Gui() {
            if (Math::POETRY > 0)
                cout << "Gui ";
            Mu = new Yi();
            Rho = Mu->Sigma->Mu->Pi();
            Psi = Mu->Upsilon->Mu->Tau->Pi();
            Nu = new Faung(Rho, Psi);
            Eta = Mu->Mu->Rho->Nu->Omega(Nu, Mu->Tau);
            Sigma = new Aluminium(Eta);
            Upsilon = Mu->Mu->Rho->Psi->Kappa(Sigma);
            Tau = new Aluminium(Upsilon);
            Theta = Mu->Upsilon->Delta(Sigma->Theta, Tau->Theta);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            vector<Faung*> Chi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            Alpha.push_back(Upsilon);
            vector<Faung*> Beta = Tau->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Gui() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}