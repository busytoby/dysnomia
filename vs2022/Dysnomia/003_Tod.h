#pragma once
#include "002_ညြ.h"

using namespace std;

namespace Dysnomia {
    class Tod {
    public:
        ညြ* Mu;
        ညြ* Psi;
        Fa* Upsilon;
        Faung* Theta;
        int Gamma = 1;

        Tod() {
            if (Math::POETRY > 0)
                cout << "Tod ";
            Mu = new ညြ(false);
            Mu->Theta->Rho->Fuse(Mu->Theta->Mu->Cone->Base, Mu->Theta->Psi->Cone->Element, Mu->Mu->Psi->Cone->Manifold);
            Mu->Theta->Rho->Tune();
            Psi = new ညြ(true);
            Upsilon = Mu->Pi();
            Theta = new Faung(Upsilon, Upsilon->Secret, Psi->Upsilon->Signal, Mu->Theta->Psi->Cone->Channel, Psi->Upsilon->Identity);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Tod() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Theta->Rod->Gamma <= 1 || Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }            
        }
    };
}