#pragma once
#include "54_Gui.h"

namespace Dysnomia {
    class Di {
    public:
        Gui* Mu;
        Fa* Rho;
        Fa* Psi;
        Faung* Nu;
        Faung* Eta;
        Aluminium* Sigma;
        Faung* Upsilon;
        Aluminium* Tau;
        Sulphur* Theta;
        int Gamma = 1;

        Di() {
            if (Math::POETRY > 0)
                cout << "Di ";
            Mu = new Gui();
            Rho = Mu->Sigma->Pi();
            Psi = Mu->Tau->Pi();
            Nu = new Faung(Rho, Psi);
            Eta = Mu->Mu->Upsilon->Omega(Nu, Mu->Sigma->Theta);
            Sigma = new Aluminium(Eta);
            Upsilon = Mu->Mu->Upsilon->Kappa(Sigma);
            Tau = new Aluminium(Upsilon);
            Theta = new Sulphur(Sigma, Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            vector<Faung*> Chi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            Alpha.push_back(Upsilon);
            vector<Faung*> Beta = Tau->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Omicron = Theta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            return Alpha;
        }

        ~Di() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
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