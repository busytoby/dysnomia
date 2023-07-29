#pragma once
#include <vector>
#include "Faung.h"

using namespace std;

namespace Dysnomia {
    class ည {
    public:
        Faung* Mu;
        Fa* Rho;
        Faung* Psi;
        int Gamma = 1;

        ည() {
            if (Math::POETRY > 0)
                cout << "ည ";
            Mu = new Faung();
            Rho = new Fa();
            Psi = new Faung(Rho, Mu->Cone->Base, Mu->Cone->Element, Mu->Cone->Manifold, Mu->Cone->Ring);
        }

        ည(Faung* Beta, Fa* Omicron) {
            if (Math::POETRY > 0)
                cout << "ည ";
            Beta->Rod->Gamma++;
            Beta->Cone->Gamma++;
            Omicron->Gamma++;
            Mu = new Faung();
            Rho = Omicron;
            Psi = Beta;
        }

        vector<Faung*> Affinities() { return vector<Faung*>({ Mu, Psi }); }

        ~ည() {
            if (Psi->Rod->Gamma <= 1 || Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Rod->Gamma <= 1 || Mu->Cone->Gamma <= 1) delete Mu; else { Mu->Rod->Gamma--; Mu->Cone->Gamma--; }
        }
    };
}