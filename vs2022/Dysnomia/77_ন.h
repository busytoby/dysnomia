#pragma once
#include "76_चंग.h"

namespace Dysnomia {
    class ন {
    public:
        चंग* Mu;
        Faung* Rho;
        Aluminium* Psi;
        Sulphur* Nu;
        Iron* Eta;
        Sulphur* Sigma;
        Iron* Upsilon;
        Faung* Tau;
        Aluminium* Theta;
        int Gamma = 1;

        ন() {
            if (Math::POETRY > 0)
                cout << "ন ";
            Mu = new चंग();
            Rho = Mu->Mu->Rho->Omega(Mu->Upsilon, Mu->Theta);
            Psi = new Aluminium(Rho);
            Nu = new Sulphur(Mu->Mu->Psi, Mu->Mu->Nu, Mu->Mu->Eta, Rho);
            Eta = new Iron(Nu, Mu->Mu->Psi, Mu->Mu->Nu, Mu->Mu->Eta, Rho);
            Sigma = new Sulphur(Rho, Mu->Psi, Mu->Upsilon, Mu->Theta);
            Upsilon = new Iron(Sigma, Rho, Mu->Psi, Mu->Upsilon, Mu->Theta);
            Tau = Mu->Mu->Rho->Kappa(Psi);
            Theta = new Aluminium(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Nu->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Omicron = Eta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Xi = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            Alpha.push_back(Tau);
            vector<Faung*> Pi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            return Alpha;
        }

        ~ন() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}