#pragma once
#include "17_Beit.h"

using namespace std;

namespace Dysnomia {
    class Wou {
    public:
        Beit* Mu;
        Eun* Rho;
        Eun* Psi;
        Song* Nu;
        int Gamma;

        ~Wou() {
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Wou() {
            Mu = new Beit();
            pair<Eun*, Eun*> Five = Mu->Mu->Rho->Upsilon->Kappa();
            Rho = Five.first;
            Psi = Five.second;
            Nu = new Song(Psi);
        }

        void Omega() {
            Affinity* Sigma = Mu->Eta->Sigma->Kappa(Mu->Eta->Eta->Tau);
        }
    };
}