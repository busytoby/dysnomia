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

        vector<Affinity*> Affinities() {
            vector<Affinity*> Alpha(Mu->Affinities());
            vector<Affinity*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Affinity*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Affinity*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Affinity*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Affinity*> Xi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Affinity*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            vector<Affinity*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Affinity*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Huo() {
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Huo(Feng* Beta, Tung* Iota, Xiao* Omicron, Qiao* Lambda, Tung* Xi, Tsuan* Alpha, Fao* Delta) {
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