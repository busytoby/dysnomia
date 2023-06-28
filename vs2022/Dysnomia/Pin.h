#pragma once
#include "28_Dang.h"

namespace Dysnomia {
    class Pin {
    public:
        Dang* Mu;
        Dong* Rho;
        Dong* Psi;
        Dong* Nu;
        Dong* Eta;
        MAI* Sigma;
        int Gamma = 1;

        Pin() {
            Mu = new Dang();
            Rho = new Dong(new Host(Mu->Sigma->Nu, Mu->Rho->Nu));
            Psi = new Dong(new Host(Mu->Upsilon->Nu, Mu->Psi->Nu));
            Nu = new Dong(new Host(Mu->Tau->Nu, Mu->Nu->Nu));
            Eta = new Dong(new Host(Mu->Theta->Nu, Mu->Eta->Nu));
            Sigma = new MAI(Mu->Mu);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Xi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            return Alpha;
        }

        ~Pin() {
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        void Call() {
            Tong* Beta = new Tong(Psi->Eta->Eta, Mu->Sigma->Theta->Psi->Upsilon);

            delete Mu->Sigma->Theta;
            Mu->Omega(Rho->Eta, Psi->Nu, Nu->Upsilon, Eta->Sigma);
        }
    };
}