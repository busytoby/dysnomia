#pragma once
#include "../006_锚.h"

using namespace std;

namespace Dysnomia {
    class Atmos {
    public:
        Fa* Mu;
        list<Faung*> Rho;

        Int64 Water;

        Atmos(Fa* Eta) {
            Eta->Gamma++;
            Mu = Eta;
            Water = 0;
        }

        ~Atmos() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}