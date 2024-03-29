﻿#pragma once
#include "002_ညြ.h"
#include "Domain/Atmos.h"

using namespace std;

namespace Dysnomia {
    class Tod {
    public:
        ညြ* Mu;
        ညြ* Psi;
        Fa* Upsilon;
        Fa* Tau;
        int Gamma = 1;

        static Atmos* Eta;

        Tod() {
            if (Math::POETRY > 6)
                wcout << L"Tod ";
            Mu = new ညြ(false);
            if (Eta == nullptr) Eta = new Atmos(Mu->Psi);
            Psi = new ညြ(true);

            Upsilon = Mu->Pi(Mu->Mu->Psi->Omicron);
            Tau = Psi->Pi(Psi->Theta->Mu->Omega);
        }

        Tod(ညြ* Beta, Fa* Omicron, ည* Iota) {
            Beta->Gamma++;
            Omicron->Gamma++;
            if (Math::POETRY > 6)
                cout << "Tod ";
            Mu = Beta;
            Psi = new ညြ(Mu->Theta, Iota, Mu->Mu);
            Upsilon = Mu->Pi(Mu->Theta->Mu->Cone->Coordinate);
            Tau = Omicron;
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            return Alpha;
        }

        ~Tod() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
        }
    };
}