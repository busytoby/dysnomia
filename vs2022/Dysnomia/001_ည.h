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
            Psi = Pi();
        }

        ည(Faung* Beta, Fa* Omicron, bool Iota) {
            if (Math::POETRY > 0)
                cout << "ည ";
            Beta->Rod->Gamma++;
            Beta->Cone->Gamma++;
            Omicron->Gamma++;
            if (Iota)
                Mu = new Faung();
            else
                Mu = Beta;
            Rho = Omicron;
            if (Iota)
                Psi = Beta;
            else
                Psi = new Faung();
        }

        Faung* Pi() {
            return new Faung(Rho, Mu->Cone->Secret, Mu->Cone->Signal, Mu->Cone->Channel, Mu->Cone->Identity);
        }

        vector<Faung*> Affinities() { return vector<Faung*>({ Mu, Psi }); }

        ~ည() {
            if (Mu->Rod->Gamma <= 1 || Mu->Cone->Gamma <= 1) delete Mu; else { Mu->Rod->Gamma--; Mu->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Psi->Rod->Gamma <= 1 || Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
        }
    };
}