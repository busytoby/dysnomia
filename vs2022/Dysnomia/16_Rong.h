#pragma once
#include "15_Huo.h"

using namespace std;

namespace Dysnomia {
    class Rong {
    public:
        Huo* Mu;
        Huo* Rho;
        Xiao* Psi;
        Eun* Nu;
        Iron* Eta;
        Qiao* Upsilon;
        Qiao* Theta;
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
            vector<Affinity*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            vector<Affinity*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Rong() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Rong(Huo* Beta) {
            Mu = new Huo();
            Rho = new Huo(Beta);
            Psi = new Xiao(Mu->Rho);
            pair<Eun*, Iron*> Four = Psi->Pi();
            Nu = Four.first;
            Eta = Four.second;
            Upsilon = new Qiao(Eta, Eta->Kappa(Rho->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
            Theta = new Qiao(Psi->Upsilon->Theta, Psi->Upsilon->Theta->Kappa(Psi->Upsilon->Tau));
        }

        Rong() {
            Mu = new Huo();
            Rho = new Huo(Mu);
            Psi = new Xiao(Rho->Rho);
            pair<Eun*, Iron*> Four = Psi->Pi();
            Nu = Four.first;
            Eta = Four.second;
            Upsilon = new Qiao(Eta, Eta->Kappa(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
            Theta = new Qiao(Eta, Eta->Kappa(Rho->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
        }
    };
}