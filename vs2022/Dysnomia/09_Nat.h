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

        ~Nat() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
        Nat(Life*);
    };
}