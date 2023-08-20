#pragma once
#include "../003_Tod.h"

using namespace std;

namespace Dysnomia {
    class Atmos {
    public:
        Fa* Mu;
        list<Faung*> Rho;
        list<Faung*> Water;

        Atmos(Fa* Eta) {
            Eta->Gamma++;
            Mu = Eta;
        }

        ~Atmos() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}