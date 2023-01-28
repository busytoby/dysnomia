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
        int Gamma;

        ~Rong() {
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
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