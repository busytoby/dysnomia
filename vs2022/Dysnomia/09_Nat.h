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

        ~Nat() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
        Nat(Life*);
    };
}