#pragma once
#include "004_Zuo.h"

using namespace std;

namespace Dysnomia {
    class ë {
    public:
        Zuo* Mu;
        ည* Rho;
        ည* Psi;
        Faung* Nu;
        ည* Eta;
        ညြ* Sigma;
        int Gamma = 1;

        ë() {
            if (Math::POETRY > 0)
                cout << "ë ";
            Mu = new Zuo();
            Rho = new ည(Mu->Psi->Mu, Mu->Mu->Upsilon);
            Psi = new ည(Mu->Eta->Mu, Mu->Mu->Mu->Pi());
            Nu = Psi->Pi();
            Eta = new ည(Nu, Mu->Mu->Psi->Pi());
            Sigma = new ညြ(Rho, Psi, Eta);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Nu);
            vector<Faung*> Omicron = Eta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

        ~ë() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Nu->Rod->Gamma <= 1 || Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
        }
    };
}