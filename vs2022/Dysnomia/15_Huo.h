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
            Tung* Rho = new Tung(Mu->Theta->Mu->Mu);
            Xiao* Psi = new Xiao(Rho);
            Qiao* Nu = new Qiao(Psi->Theta, Psi->Theta->Omicron(), Psi->Theta->Beta(), Mu->Psi->Theta->Mu->Eta);
            Tung* Eta = new Tung(Mu->Rho->Mu->Mu->Mu);
            Xiao* Sigma = new Xiao(Eta);
            Tsuan* Upsilon = new Tsuan(Psi, Nu, Eta);
            Fao* Tau = new Fao(Upsilon, Sigma);
            Feng* Theta = new Feng(Tau);
        }

        Huo() {
            Feng* Mu = new Feng();
            Tung* Rho = new Tung(Mu->Theta->Mu->Mu);
            Xiao* Psi = new Xiao(Rho);
            Qiao* Nu = new Qiao(Psi->Theta, Psi->Theta->Omicron(), Psi->Theta->Beta(), Mu->Psi->Theta->Mu->Eta);
            Tung* Eta = new Tung(Mu->Rho->Mu->Mu->Mu);
            Xiao* Sigma = new Xiao(Eta);
            Tsuan* Upsilon = new Tsuan(Psi, Nu, Eta);
            Fao* Tau = new Fao(Upsilon, Sigma);
            Feng* Theta = new Feng(Tau);
        }
    };
}