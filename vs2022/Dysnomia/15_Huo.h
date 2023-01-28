#pragma once
#include "14_Feng.h"

using namespace std;

namespace Dysnomia {
    class Huo {
    public:
        Feng* Mu;
        Tung* Rho;
        Xiao* Psi;
        Qiao* Nu;
        Tung* Eta;
        Xiao* Sigma;
        Tsuan* Upsilon;
        Fao* Tau;
        Feng* Theta;
        int Gamma;

        ~Huo() {
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Huo(Huo* Beta) {
            Mu = Beta->Theta;
            Rho = new Tung(Mu->Theta->Mu->Mu);
            Psi = new Xiao(Rho);
            Nu = new Qiao(Psi->Theta, Psi->Theta->Omicron(), Psi->Theta->Beta(), Mu->Psi->Theta->Mu->Eta);
            Eta = new Tung(Mu->Rho->Mu->Mu->Mu);
            Sigma = new Xiao(Eta);
            Upsilon = new Tsuan(Psi, Nu, Eta);
            Tau = new Fao(Upsilon, Sigma);
            Theta = new Feng(Tau);
        }

        Huo() {
            Mu = new Feng();
            Rho = new Tung(Mu->Theta->Mu->Mu);
            Psi = new Xiao(Rho);
            Nu = new Qiao(Psi->Theta, Psi->Theta->Omicron(), Psi->Theta->Beta(), Mu->Psi->Theta->Mu->Eta);
            Eta = new Tung(Mu->Rho->Mu->Mu->Mu);
            Sigma = new Xiao(Eta);
            Upsilon = new Tsuan(Psi, Nu, Eta);
            Tau = new Fao(Upsilon, Sigma);
            Theta = new Feng(Tau);
        }
    };
}