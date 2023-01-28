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
        Nat(Life*);
    };
}