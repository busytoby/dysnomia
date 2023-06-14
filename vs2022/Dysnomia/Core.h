#pragma once
#include "Pin.h"

namespace Dysnomia {
    class Core {
    public:
        Pin* Mu;
        Tong* Rho;
        Tsong* Psi;
        Fao* Nu;
        Tsuan* Eta;
        Huo* Sigma;
        int Gamma = 1;

        Core() {
            Mu = new Pin();
            Rho = Mu->Rho->Tau->Beta();
            Psi = Mu->Psi->Tau->Pi();
            Nu = new Fao(Mu->Sigma->Nu->Mu->Rho->Upsilon, Mu->Sigma->Nu->Nu, new Nat(Rho));
            Eta = Nu->Delta(Mu->Nu->Tau->Omicron());
            Sigma = new Huo(Mu->Eta->Theta, Nu->Mu, Nu->Rho, Eta, Nu);
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

        ~Core() {
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}