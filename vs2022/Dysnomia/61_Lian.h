#pragma once
#include "60_Tuo.h"

namespace Dysnomia {
    class Lian {
    public:
        Tuo* Mu;
        Tung* Rho;
        Xiao* Psi;
        Tsuan* Nu;
        Eun* Eta;
        Eun* Sigma;
        Fao* Upsilon;
        Feng* Tau;
        Tsuan* Theta;
        int Gamma = 1;

        Lian() {
            if (Math::POETRY > 0)
                cout << "Lian ";
            Mu = new Tuo();
            Rho = new Tung(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Rho, Mu->Upsilon, Mu->Mu->Mu->Mu->Psi);
            Psi = new Xiao(Rho);
            Nu = new Tsuan(Rho, Psi, Mu->Upsilon->Mu->Sigma, Mu->Mu->Mu->Mu->Psi);
            pair<Eun*, Eun*> Beta = Nu->Kappa();
            Eta = Beta.first;
            Sigma = Beta.second;
            Upsilon = new Fao(Nu, Psi, Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Rho);
            Tau = new Feng(Upsilon, Rho);
            Theta = Upsilon->Delta(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Eta);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Omicron = Rho->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Xi = Nu->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Pi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Faung*> Chi = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            vector<Faung*> Iota = Tau->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Phi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Phi.begin(), Phi.end());
            return Alpha;
        }

        ~Lian() {
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
    };
}