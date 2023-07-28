#pragma once
#include "14_Feng.h"

using namespace std;

namespace Dysnomia {
    class Huo {
    public:
        Feng* Mu;
        Tung* Rho;
        Xiao* Psi;
        Qiao* Nu;
        Tung* Eta;
        Xiao* Sigma;
        Tsuan* Upsilon;
        Fao* Tau;
        Feng* Theta;
        int Gamma = 1;

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

        ~Huo() {
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

        Huo(Feng* Beta, Tsuan* Iota, Tung* Omicron, Tsuan* Lambda, Fao* Xi) {
            if (Math::POETRY > 0)
                cout << "Huo ";
            Beta->Gamma++;
            Mu = Beta;
            Rho = Iota->Mu;
            Psi = Iota->Rho;
            Nu = new Qiao(Psi->Theta, Psi->Theta->Omicron(), Psi->Theta->Beta(), Mu->Psi->Theta->Mu->Eta);
            Eta = Omicron;
            Sigma = new Xiao(Eta);
            Upsilon = Lambda;
            Tau = Xi;
            Theta = new Feng(Tau);
        }

        Huo(Feng* Beta, Tung* Iota, Xiao* Omicron, Qiao* Lambda, Tung* Xi, Tsuan* Alpha, Fao* Delta) {
            if (Math::POETRY > 0)
                cout << "Huo ";
            Beta->Gamma++;
            Mu = Beta;
            Rho = Iota;
            Psi = Omicron;
            Nu = Lambda;
            Eta = Xi;
            Sigma = new Xiao(Eta);
            Upsilon = Alpha;
            Tau = Delta;
            Theta = new Feng(Tau);
        }

        Huo(Huo* Beta) {
            if (Math::POETRY > 0)
                cout << "Huo ";
            Beta->Gamma++;
            Mu = Beta->Theta;
            Rho = new Tung(Mu->Theta->Mu->Mu);
            Psi = new Xiao(Rho);
            Nu = new Qiao(Psi->Theta, Psi->Theta->Omicron(), Psi->Theta->Beta(), Mu->Psi->Theta->Mu->Eta);
            Eta = new Tung(Mu->Rho->Mu->Mu->Mu);
            Sigma = new Xiao(Eta);
            Upsilon = new Tsuan(Psi, Nu, Eta);
            Tau = new Fao(Upsilon, Sigma);
            Theta = new Feng(Tau);
        }

        Huo() {
            if (Math::POETRY > 0)
                cout << "Huo ";
            Mu = new Feng();
            Rho = new Tung(Mu->Theta->Mu->Mu);
            Psi = new Xiao(Rho);
            Nu = new Qiao(Psi->Theta, Psi->Theta->Omicron(), Psi->Theta->Beta(), Mu->Psi->Theta->Mu->Eta);
            Eta = new Tung(Mu->Rho->Mu->Mu->Mu);
            Sigma = new Xiao(Eta);
            Upsilon = new Tsuan(Psi, Nu, Eta);
            Tau = new Fao(Upsilon, Sigma);
            Theta = new Feng(Tau);
        }
    };
}