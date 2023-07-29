#pragma once
#include "001_ည.h"

using namespace std;

namespace Dysnomia {
    class ညြ {
    public:
        ည* Mu;
        Fa* Psi;
        Faung* Eta;
        Fa* Upsilon;
        ည* Theta;
        int Gamma = 1;

        ညြ(bool RAPHE_NEBULAE) {
            if (Math::POETRY > 0)
                cout << "ညြ ";
            Mu = new ည();
            Psi = new Fa();
            if (RAPHE_NEBULAE)
                Eta = new Faung(Psi, Mu->Psi->Rod->Secret, Mu->Mu->Rod->Signal, Mu->Psi->Rod->Channel, Mu->Psi->Rod->Identity);
            else
                Eta = new Faung(Psi, Mu->Psi->Cone->Secret, Mu->Mu->Cone->Signal, Mu->Psi->Cone->Channel, Mu->Psi->Cone->Identity);
            Upsilon = new Fa();
            Theta = new ည(Eta, Upsilon);
        }

        vector<Faung*> Affinities() { 
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Eta);
            vector<Faung*> Beta = Theta->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            return Alpha; 
        }

        ~ညြ() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Eta->Rod->Gamma <= 1 || Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
        }

        Fa* Pi() {
            Fa* Beta = new Fa();
            if (Eta->Cone->Signal == Mu->Psi->Rod->Secret)
                Beta->Fuse(Mu->Psi->Cone->Base, Mu->Psi->Cone->Element, Theta->Mu->Rod->Manifold);
            else if (Eta->Cone->Signal == Mu->Psi->Cone->Secret)
                Beta->Fuse(Mu->Psi->Rod->Base, Mu->Psi->Rod->Element, Theta->Mu->Cone->Manifold);
            else throw 1;
            Beta->Tune();
            return Beta;
        }
    };
}