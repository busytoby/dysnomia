#pragma once
#include "08_Life.h"

namespace Dysnomia {
    class Nat {
    public:
        Life* Mu;
        Tin* Rho;
        Iron* Psi;
        Iron* Nu;
        Eun* Eta;
        Eun* Sigma;
        Affinity* Upsilon;
        Aluminium* Tau;
        Qiao* Theta;
        int Gamma = 1;

        ~Nat() { 
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
        
        Nat(Life* Beta) {
            Beta->Gamma++;
            Mu = Beta;
            Rho = new Tin(Mu->Upsilon->Rho);
            Psi = new Iron(Mu->Psi->Mu->Sigma, Mu->Psi->Mu->Upsilon->Beta(), Mu->Psi->Mu->Upsilon->Omicron(), Mu->Psi->Mu->Sigma->Nu, Mu->Psi->Mu->Sigma->Sigma);
            Nu = new Iron(Psi->Upsilon, Psi->Beta(), Psi->Omicron());
            Eta = new Eun(Psi);
            Sigma = new Eun(Eta->Sigma);
            Upsilon = Sigma->Sigma->Delta(Sigma->Rho->Beta(), Sigma->Rho->Omicron());
            Tau = new Aluminium(Upsilon);
            Theta = new Qiao(Psi, Upsilon);
        }
    };
}