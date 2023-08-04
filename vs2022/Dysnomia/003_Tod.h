#pragma once
#include "002_ညြ.h"

using namespace std;

namespace Dysnomia {
    class Tod {
    public:
        ညြ* Mu;
        ညြ* Psi;
        Fa* Upsilon;
        Fa* Tau;
        int Gamma = 1;

        Tod() {
            if (Math::POETRY > 0)
                cout << "Tod ";
            Mu = new ညြ(false);
            Psi = new ညြ(true);
            Psi->Theta->Rho->Fuse(Mu->Theta->Mu->Cone->Base, Mu->Theta->Psi->Cone->Element, Mu->Mu->Psi->Cone->Manifold);
            Psi->Theta->Rho->Tune();
            Mu->Theta->Rho->Fuse(Psi->Theta->Mu->Rod->Signal, Psi->Theta->Psi->Rod->Channel, Psi->Mu->Psi->Rod->Identity);
            Mu->Theta->Rho->Tune();
            Upsilon = Mu->Pi();
            Tau = Psi->Pi();
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