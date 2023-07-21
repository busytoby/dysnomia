#pragma once
#include "Ong.h"

namespace Dysnomia {
    class Ba {
    public:
        Ong* Mu;
        Aluminium* Rho;
        Iron* Psi;
        Fa* Nu;
        Fa* Eta;
        Faung* Sigma;
        Aluminium* Upsilon;
        Faung* Tau;
        Iron* Theta;
        int Gamma = 1;

        Ba() {
            if (Math::POETRY > 0)
                cout << "Ba ";
            Mu = new Ong();
            Rho = new Aluminium(Mu->Theta);
            Psi = new Iron(Mu->Psi->Eta, Mu->Upsilon, Rho->Theta);
            Nu = Mu->Tau->Pi();
            Eta = Mu->Mu->Upsilon->Tau->Pi();
            Sigma = new Faung(Nu, Eta);
            Upsilon = new Aluminium(Sigma);
            Tau = Psi->Delta(Mu->Theta, Upsilon->Rho);
            Theta = new Iron(Mu->Psi->Eta, Upsilon->Theta, Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Sigma);
            vector<Faung*> Xi = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            Alpha.push_back(Tau);
            vector<Faung*> Delta = Theta->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            return Alpha;
        }

        ~Ba() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}