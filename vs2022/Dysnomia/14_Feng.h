#pragma once
#include "08a_Tong.h"
#include "13_Fao.h"

using namespace std;

namespace Dysnomia {
    class Feng {
    public:
        Life* Mu;
        Fao* Rho;
        Tung* Psi;
        Xiao* Nu;
        Qiao* Eta;
        Iron* Sigma;
        Qiao* Upsilon;
        Xiao* Tau;
        Tsuan* Theta;
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

        ~Feng() {
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Feng(Fao* Beta) {
            Beta->Gamma++;
            Mu = Beta->Pi();
            Rho = Beta;
            Psi = new Tung(Rho->Pi());
            Nu = new Xiao(Psi);
            Eta = new Qiao(Nu->Theta, Nu->Theta->Beta(), Nu->Theta->Omicron(), Psi->Theta->Mu->Eta);
            Sigma = new Iron(Psi->Theta->Mu->Eta, Eta->Nu, Psi->Mu->Nu->Omicron());
            Upsilon = new Qiao(Sigma, Mu->Psi->Upsilon, Rho->Eta->Upsilon, Psi->Theta->Mu->Eta);
            Tau = new Xiao(Nu->Mu);
            Theta = new Tsuan(Psi, Nu, Psi->Theta->Mu->Eta, Eta);
        }

        Feng() {
            Mu = new Tong();
            Rho = new Fao(Mu);
            Psi = new Tung(Rho->Pi());
            Nu = new Xiao(Psi);
            Eta = new Qiao(Nu->Theta, Nu->Theta->Beta(), Nu->Theta->Omicron(), Psi->Theta->Mu->Eta);
            Sigma = new Iron(Psi->Theta->Mu->Eta, Eta->Nu, Psi->Mu->Nu->Omicron());
            Upsilon = new Qiao(Sigma, Mu->Psi->Upsilon, Rho->Eta->Upsilon, Psi->Theta->Mu->Eta);
            Tau = new Xiao(Nu->Mu);
            Theta = new Tsuan(Psi, Nu, Psi->Theta->Mu->Eta, Eta);
        }
    };
}