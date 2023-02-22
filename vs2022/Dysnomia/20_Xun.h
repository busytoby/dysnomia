#pragma once
#include "19_Sing.h"

using namespace std;

namespace Dysnomia {
    class Xun {
    public:
        Sing* Mu;
        Nat* Rho;
        Tung* Psi;
        Xiao* Nu;
        Tsuan* Eta;
        Fao* Upsilon;
        Feng* Tau;
        Huo* Theta;
        int Gamma = 1;

        Xun(Wou* Beta, Wou* Iota) {
            Mu = new Sing(Beta, Iota);
            Rho = new Nat(Mu->Theta, Iota->Psi);
            Psi = new Tung(Rho, Beta->Rho, Mu->Psi);
            Nu = new Xiao(Psi);
            Eta = new Tsuan(Psi, Mu->Theta, Nu);
            Upsilon = new Fao(Eta, Nu, Rho);
            Tau = new Feng(Upsilon, Psi);
            Theta = new Huo(Iota->Mu->Mu->Mu);
        }

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
            vector<Affinity*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Affinity*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Xun() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}