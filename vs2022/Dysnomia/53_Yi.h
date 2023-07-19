#pragma once
#include "52_𐡔.h"

namespace Dysnomia {
    class Yi {
    public:
        𐡔* Mu;
        Faung* Rho;
        Faung* Psi;
        Faung* Nu;
        Faung* Eta;
        Sulphur* Sigma;
        Iron* Upsilon;
        Faung* Tau;
        Faung* Theta;
        int Gamma = 1;

        Yi() {
            if (Math::POETRY > 0)
                cout << "Yi ";
            Mu = new 𐡔();
            Rho = Mu->Mu->Tau->Tau->Omega(Mu->Sigma, Mu->Eta);
            Psi = Mu->Mu->Tau->Tau->Omega(Mu->Upsilon, Mu->Rho->Upsilon);
            Nu = Mu->Rho->Psi->Delta(Rho, Psi);
            Eta = Mu->Mu->Theta->Nu->Omega(Nu, Mu->Theta->Upsilon);
            Sigma = new Sulphur(Rho, Psi, Nu, Eta);
            Upsilon = new Iron(Mu->Rho->Mu->Rho->Mu->Sigma, Rho, Psi, Nu, Eta);
            Tau = Upsilon->Beta();
            Theta = Upsilon->Omicron();
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Psi);
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            vector<Faung*> Chi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            vector<Faung*> Beta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Tau);
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Yi() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}