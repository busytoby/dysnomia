#pragma once
#include "004_Zuo.h"

using namespace std;

namespace Dysnomia {
    class ë {
    public:
        Zuo* Mu;
        ည* Rho;
        Fa* Psi;
        ည* Nu;
        Faung* Eta;
        Fa* Sigma;
        ည* Upsilon;
        ညြ* Tau;
        int Gamma = 1;

        ë(Zuo* Beta, bool Iota) {
            Beta->Gamma++;
            if (Math::POETRY > 0)
                cout << "ë ";
            Mu = Beta;
            Rho = new ည(Mu->Psi->Mu, Mu->Mu->Upsilon);
            Psi = Mu->Mu->Mu->Pi();
            Nu = new ည(Mu->Eta->Mu, Psi);
            if (Iota)
                Eta = Mu->Upsilon;
            else
                Eta = Mu->Theta;
            Eta->Rod->Gamma++;
            Eta->Cone->Gamma++;
            Sigma = Mu->Mu->Psi->Pi();
            Upsilon = new ည(Eta, Sigma);
            Tau = new ညြ(Rho, Nu, Upsilon);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Nu->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Eta);
            vector<Faung*> Omicron = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Tau->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

        ~ë() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Eta->Rod->Gamma <= 1 || Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
        }
    };
}