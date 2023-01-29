#pragma once
#include "Wou.h"

using namespace std;

namespace Dysnomia {
    class Sing {
    public:
        Sulphur* Mu;
        Iron* Rho;
        Qiao* Psi;
        Tin* Nu;
        Eun* Eta;
        Affinity* Sigma;
        Song* Tau;
        Tsong* Theta;
        int Gamma = 1;

        Sing(Wou* Beta, Wou* Iota) {
            Sulphur* Mu = Iota->Pi(Beta->Omega());
            Iron* Rho = Beta->Tau(Mu, Iota->Nu->Tau->Beta(), Iota->Nu->Tau->Omicron());
            Qiao* Psi = new Qiao(Rho, Iota->Psi->Rho->Beta());
            Tin* Nu = new Tin(Rho->Omicron());
            Eun* Eta = new Eun(Nu, Rho);
            Affinity* Sigma = Iota->Nu->Tau->Omega(Beta->Nu->Tau->Omicron(), Rho->Beta());
            Song* Tau = new Song(Eta, Sigma);
            Tsong* Theta = new Tsong(Tau);
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
            Alpha.push_back(Sigma);
            vector<Affinity*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Affinity*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Sing() {
            if (Theta->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}