#pragma once
#include "27_MAI.h"

namespace Dysnomia {
    class Dang {
    public:
        Host* Mu;
        Fuang* Rho;
        Fuang* Psi;
        Fuang* Nu;
        Fuang* Eta;
        Fuang* Sigma;
        Fuang* Upsilon;
        Fuang* Tau;
        MAI* Theta;
        int Gamma = 1;

        Dang() {
            Mu = new Host();
            Rho = new Fuang(Mu);
            Psi = new Fuang(Mu);
            Nu = new Fuang(Mu);
            Eta = new Fuang(Mu);
            Sigma = new Fuang(Mu);
            Upsilon = new Fuang(Mu);
            Tau = new Fuang(Mu);
            Theta = new MAI(Mu);
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
            vector<Faung*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            vector<Faung*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Faung*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Dang() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        void Omega(Cie* Beta, Cie* Iota, Cie* Omicron, Cie* Lambda) {
            Faung* Rho = Theta->Kappa(Beta);
            Faung* Psi = Theta->Kappa(Iota);
            Faung* Nu = Theta->Kappa(Omicron);
            Faung* Eta = Theta->Kappa(Lambda);
        }
    };
}