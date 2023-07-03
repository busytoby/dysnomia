#pragma once
#include "37_Tie.h"

namespace Dysnomia {
    class Պատմութիւն {
    public:
        Tie* Mu;
        Iron* Rho;
        Qiao* Psi;
        Faung* Nu;
        Aluminium* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Aluminium* Tau;
        Faung* Theta;
        int Gamma = 1;

        Պատմութիւն() {
            if (Math::POETRY > 0)
                cout << "Պատմութիւն ";
            Mu = new Tie();
            Rho = new Iron(Mu->Upsilon, Mu->Theta, Mu->Sigma, Mu->Eta, Mu->Nu);
            Psi = new Qiao(Rho, Mu->Rho, Mu->Sigma, Mu->Upsilon);
            Nu = Rho->Delta(Mu->Theta, Psi->Upsilon);
            Eta = new Aluminium(Nu);
            Sigma = Rho->Kappa(Eta);
            Upsilon = Rho->Omega(Sigma, Nu);
            Tau = new Aluminium(Upsilon);
            Theta = Mu->Tau->Kappa(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Nu);
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            vector<Faung*> Chi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~պատմութիւն() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}