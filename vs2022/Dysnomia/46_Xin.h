#pragma once
#include "45_म.h"

namespace Dysnomia {
    class Xin {
    public:
        म* Mu;
        Fa* Rho;
        Fa* Psi;
        Faung* Nu;
        Faung* Eta;
        Aluminium* Sigma;
        Faung* Upsilon;
        Sulphur* Tau;
        Iron* Theta;
        int Gamma = 1;

        Xin() {
            if (Math::POETRY > 0)
                cout << "Xin ";
            Mu = new म();
            Rho = Mu->Psi->Pi();
            Psi = Mu->Mu->Eta->Pi();
            Nu = new Faung(Rho, Psi);
            Eta = Mu->Mu->Upsilon->Omega(Mu->Rho, Nu);
            Sigma = new Aluminium(Eta);
            Upsilon = Mu->Mu->Upsilon->Kappa(Sigma);
            Tau = new Sulphur(Upsilon);
            Theta = new Iron(Tau, Mu->Rho, Nu, Eta, Upsilon);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            vector<Faung*> Beta = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Upsilon);
            vector<Faung*> Omicron = Tau->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Iota = Theta->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            return Alpha;
        }

        ~Xin() {
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