#pragma once
#include "004_Zuo.h"

using namespace std;

namespace Dysnomia {
    class ë {
    public:
        Zuo* Mu;
        Faung* Rho;
        Faung* Psi;
        Faung* Nu;
        Fa* Eta;
        ညြ* Sigma;
        Faung* Upsilon;
        int Gamma = 1;

        ë() {
            if (Math::POETRY > 0)
                cout << "ë ";
            Mu = new Zuo();
            Rho = new Faung(Mu->Upsilon, Mu->Theta);
            Rho->Theta(Mu->Mu->Mu->Psi->Channel);
            Psi = new Faung(Rho->Rho, Rho->Upsilon, Rho->Ohm, Rho->Omicron);
            Nu = new Faung(Rho->Rho, Rho->Upsilon, Rho->Ohm, Rho->Omega);
            Eta = new Fa();
            Sigma = new ညြ(true);
            Upsilon = nullptr;
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Psi);
            Alpha.push_back(Nu);
            vector<Faung*> Beta = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            if (Upsilon != nullptr) Alpha.push_back(Upsilon);
            return Alpha;
        }

        ~ë() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Rho->Rod->Gamma <= 1 || Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Psi->Rod->Gamma <= 1 || Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 || Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Upsilon != nullptr) delete Upsilon;
        }
    };
}