#pragma once
#include "50_Mei.h"

namespace Dysnomia {
    class Guan {
    public:
        Mei* Mu;
        Iron* Rho;
        Eun* Psi;
        Song* Nu;
        Tong* Eta;
        Nat* Sigma;
        Eun* Upsilon;
        Song* Tau;
        Tsong* Theta;
        int Gamma = 1;

        Guan() {
            if (Math::POETRY > 0)
                cout << "Guan ";
            Mu = new Mei();
            Rho = Mu->Sigma->Omega();
            Psi = new Eun(Rho);
            Nu = new Song(Psi, Mu->Tau);
            Eta = new Tong(Nu, Mu->Tau);
            Sigma = new Nat(Eta, Psi);
            Upsilon = new Eun(Mu->Upsilon, Rho);
            Tau = new Song(Upsilon, Mu->Theta);
            Theta = new Tsong(Tau, Mu->Theta, Mu->Rho->Tau);
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

        ~Guan() {
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}