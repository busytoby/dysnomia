#pragma once
#include "39_Meng.h"

namespace Dysnomia {
    class En {
    public:
        Meng* Theta;
        Fa* Tau;
        Faung* Upsilon;
        Iron* Sigma;
        Qiao* Eta;
        Iron* Nu;
        Iron* Psi;
        Qiao* Rho;
        Qiao* Mu;
        int Gamma = 1;

        En() {
            if (Math::POETRY > 0)
                cout << "En ";
            Theta = new Meng();
            Tau = new Fa();
            Tau->Fuse(Theta->Psi->Rod->Signal, Theta->Psi->Rod->Tau, Theta->Psi->Rod->Tau);
            Tau->Tune();
            Upsilon = new Faung(Tau, Theta->Upsilon->Cone->Base, Theta->Upsilon->Cone->Element, Theta->Upsilon->Cone->Manifold, Theta->Upsilon->Cone->Ring);
            Sigma = new Iron(Theta->Theta, Theta->Psi, Upsilon);
            Eta = new Qiao(Sigma, Upsilon, Theta->Psi, Theta->Tau);
            Nu = Eta->Omega();
            Psi = new Iron(Theta->Tau, Theta->Eta, Nu->Beta(), Nu->Omicron(), Upsilon);
            Rho = new Qiao(Psi, Upsilon);
            Mu = new Qiao(Nu, Upsilon, Theta->Upsilon, Theta->Mu->Mu->Mu->Psi->Rho->Mu->Nu->Mu);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Theta->Affinities());
            Alpha.push_back(Upsilon);
            vector<Faung*> Beta = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Eta->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Psi->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Xi = Rho->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Faung*> Pi = Mu->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            return Alpha;
        }

        ~En() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;           
        }
    };
}