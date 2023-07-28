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
        Faung* Sigma;
        Qiao* Upsilon;
        Iron* Tau;
        Qiao* Theta;
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
            Alpha.push_back(Sigma);
            vector<Faung*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            vector<Faung*> Xi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Faung*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Rong() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Rong(Huo* Beta, Xiao* Omicron) {
            if (Math::POETRY > 0)
                cout << "Rong ";
            Beta->Gamma++;
            Mu = new Huo(Beta);
            Rho = new Huo(Mu);
            Psi = Omicron;
            pair<Eun*, Iron*> Four = Psi->Pi();
            Nu = Four.first;
            Eta = Four.second;
            Sigma = Eta->Beta();
            Upsilon = new Qiao(Eta, Eta->Kappa(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
            Tau = Upsilon->Omega();
            Theta = new Qiao(Eta, Eta->Kappa(Rho->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
        }

        Rong(Huo* Beta) {
            if (Math::POETRY > 0)
                cout << "Rong ";
            Beta->Gamma++;
            Mu = new Huo();
            Rho = new Huo(Beta);
            Psi = new Xiao(Mu->Rho);
            pair<Eun*, Iron*> Four = Psi->Pi();
            Nu = Four.first;
            Eta = Four.second;
            Sigma = Eta->Beta();
            Upsilon = new Qiao(Eta, Eta->Kappa(Rho->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
            Tau = Upsilon->Omega();
            Theta = new Qiao(Psi->Upsilon->Theta, Psi->Upsilon->Theta->Kappa(Psi->Upsilon->Tau));
        }

        Rong() {
            if (Math::POETRY > 0)
                cout << "Rong ";
            Mu = new Huo();
            Rho = new Huo(Mu);
            Psi = new Xiao(Rho->Rho);
            pair<Eun*, Iron*> Four = Psi->Pi();
            Nu = Four.first;
            Eta = Four.second;
            Sigma = Eta->Beta();
            Upsilon = new Qiao(Eta, Eta->Kappa(Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
            Tau = Upsilon->Omega();
            Theta = new Qiao(Eta, Eta->Kappa(Rho->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu->Mu));
        }
    };
}