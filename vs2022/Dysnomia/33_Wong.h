#pragma once
#include "32_Tiao.h"

namespace Dysnomia {
    class Wong {
    public:
        Tiao* Mu;
        Nat* Rho;
        Nat* Psi;
        Nat* Eta;
        int Gamma = 1;

        Wong() {
            Mu = new Tiao();
            Rho = new Nat(Mu->Mu->Rho);
            Psi = new Nat(Mu->Mu->Psi);
            Eta = new Nat(Mu->Rho->Mu);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

        ~Wong() {
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}