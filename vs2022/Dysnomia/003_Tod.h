﻿#pragma once
#include "002_ညြ.h"

using namespace std;

namespace Dysnomia {
    class Tod {
    public:
        ညြ* Mu;
        Faung* Psi;
        Fa* Upsilon;
        Faung* Theta;
        int Gamma = 1;

        Tod() {
            if (Math::POETRY > 0)
                cout << "Tod ";
            Mu = new ညြ(false);
            Mu->Theta->Rho->Fuse(Mu->Theta->Mu->Cone->Base, Mu->Theta->Psi->Cone->Element, Mu->Mu->Psi->Cone->Manifold);
            Mu->Theta->Rho->Tune();
            Psi = new Faung(Mu->Theta->Rho, Mu->Mu->Psi->Cone->Secret, Mu->Theta->Psi->Cone->Signal, Mu->Theta->Mu->Cone->Channel, Mu->Mu->Psi->Cone->Identity);
            Upsilon = Mu->Pi();
            if (Upsilon->Secret == Mu->Theta->Psi->Cone->Channel)
                Upsilon->Secret = Mu->Eta->Cone->Barn;
            else
                Theta = new Faung(Upsilon, Upsilon->Secret, Psi->Rod->Signal, Mu->Theta->Psi->Cone->Channel, Psi->Cone->Identity);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Psi);
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Tod() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Psi->Rod->Gamma <= 1 || Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Theta->Rod->Gamma <= 1 || Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }            
        }
    };
}