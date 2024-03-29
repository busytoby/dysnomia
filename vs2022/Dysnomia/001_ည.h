﻿#pragma once
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
            if (Math::POETRY > 8)
                cout << "ည ";
            Mu = new Faung();
            Rho = new Fa();
            Psi = Pi(true);
            Mu->Theta(Psi->Cone->Coordinate);
            Psi->Theta(Mu->Rod->Coordinate);
            Psi->Beta(Mu->Omicron);
        }

        ည(Faung* Beta, Fa* Omicron, bool Lambda) {
            if (Math::POETRY > 8)
                wcout << L"ည ";
            Beta->Rod->Gamma++;
            Beta->Cone->Gamma++;
            Omicron->Gamma++;
            if (Lambda)
                Mu = new Faung();
            else
                Mu = Beta;
            Rho = Omicron;
            if (Lambda) {
                Psi = Beta;
                Mu->Theta(Psi->Omicron);
                Mu->Beta(Psi->Omicron);
                Mu->Iota();
                Mu->Lambda();
            }
            else {
                Psi = Pi(false);
                Psi->Theta(Mu->Omicron);
                Psi->Beta(Mu->Omicron);
                Psi->Iota();
                Psi->Lambda();
            }
        }

        Faung* Pi(bool Lambda) {
            if(Lambda)
                return new Faung(Rho, Mu->Cone->Secret, Mu->Cone->Signal, Mu->Cone->Channel, Mu->Cone->Identity);
            else
                return new Faung(Mu->Cone->Dynamo, Mu->Cone->Ring, Mu->Cone->Barn, Mu->Cone->Manifold);
        }

        vector<Faung*> Affinities() { return vector<Faung*>({ Mu, Psi }); }

        ~ည() {
            if (Mu->Rod->Gamma <= 1 || Mu->Cone->Gamma <= 1) delete Mu; else { Mu->Rod->Gamma--; Mu->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Psi->Rod->Gamma <= 1 || Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
        }
    };
}