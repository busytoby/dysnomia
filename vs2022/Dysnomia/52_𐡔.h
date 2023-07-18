#pragma once
#include "51_Guan.h"

namespace Dysnomia {
    class 𐡔 {
    public:
        Guan* Mu;
        Nat* Rho;
        Fa* Psi;
        Fa* Nu;
        Faung* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Faung* Tau;
        Aluminium* Theta;
        int Gamma = 1;

        𐡔() {
            if (Math::POETRY > 0)
                cout << "𐡔 ";
            Mu = new Guan();
            Rho = new Nat(Mu->Theta, Mu->Upsilon);
            Psi = Mu->Tau->Psi->Pi();
            Nu = Rho->Tau->Pi();
            Eta = new Faung(Psi, Nu);
            Sigma = Rho->Psi->Omicron();
            Upsilon = Rho->Nu->Beta();
            Tau = Mu->Tau->Tau->Delta(Sigma, Upsilon);
            Theta = new Aluminium(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            Alpha.push_back(Tau);
            vector<Faung*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~𐡔() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}