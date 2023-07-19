#pragma once
#include "55_Di.h"

namespace Dysnomia {
    class Gun {
    public:
        Di* Mu;
        Fa* Rho;
        Faung* Psi;
        Fa* Nu;
        Faung* Eta;
        Iron* Sigma;
        Qiao* Upsilon;
        Tin* Tau;
        Eun* Theta;
        int Gamma = 1;

        Gun() {
            if (Math::POETRY > 0)
                cout << "Gun ";
            Mu = new Di();
            Rho = Mu->Sigma->Pi();
            Psi = Mu->Mu->Mu->Upsilon->Phi(Mu->Theta, Rho);
            Nu = Mu->Tau->Pi();
            Eta = Mu->Mu->Mu->Upsilon->Phi(Mu->Mu->Mu->Sigma, Nu);
            Sigma = new Iron(Mu->Mu->Mu->Mu->Rho->Rho->Sigma, Psi, Eta);
            Upsilon = new Qiao(Sigma, Psi, Eta, Mu->Mu->Mu->Mu->Mu->Rho->Upsilon);
            Tau = new Tin(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu, Upsilon);
            Theta = new Eun(Tau, Sigma);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Psi);
            Alpha.push_back(Eta);
            vector<Faung*> Chi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            vector<Faung*> Beta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Xi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Faung*> Omicron = Theta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            return Alpha;
        }

        ~Gun() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}