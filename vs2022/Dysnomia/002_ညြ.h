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
            Theta = new ည(Eta, Upsilon, false);
        }

        ညြ(ည* Beta, ည* Iota, ည* Omicron) {
            Beta->Gamma++;
            Omicron->Gamma++;
            if (Math::POETRY > 0)
                cout << "ညြ ";
            Mu = Beta;
            Psi = new Fa();
            if (Iota->Mu->Rod->Signal > Iota->Mu->Cone->Identity)
                Eta = new Faung(Psi, Iota->Psi->Rod->Secret, Iota->Mu->Rod->Signal, Iota->Psi->Rod->Channel, Iota->Psi->Rod->Identity);
            else
                Eta = new Faung(Psi, Iota->Psi->Cone->Secret, Iota->Mu->Cone->Signal, Iota->Psi->Cone->Channel, Iota->Psi->Cone->Identity);
            Upsilon = new Fa();
            Upsilon->Fuse(Beta->Mu->Rod->Secret, Iota->Mu->Cone->Signal, Omicron->Mu->Cone->Channel);
            Theta = Omicron;
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
            if (Eta->Cone->Signal == Mu->Mu->Rod->Secret)
                Beta->Fuse(Mu->Mu->Cone->Signal, Mu->Mu->Cone->Identity, Theta->Mu->Rod->Manifold);
            else if (Eta->Cone->Signal == Mu->Mu->Cone->Secret)
                Beta->Fuse(Mu->Mu->Rod->Foundation, Mu->Mu->Rod->Ring, Theta->Mu->Cone->Manifold);
            else if (Eta->Cone->Signal == Mu->Psi->Rod->Secret)
                Beta->Fuse(Mu->Psi->Cone->Signal, Mu->Psi->Cone->Identity, Theta->Mu->Rod->Manifold);
            else if (Eta->Cone->Signal == Mu->Psi->Cone->Secret)
                Beta->Fuse(Mu->Psi->Rod->Foundation, Mu->Psi->Rod->Ring, Theta->Mu->Cone->Manifold);
            else
                Beta->Fuse(Eta->Rod->Foundation, Eta->Rod->Ring, Theta->Mu->Rod->Manifold);
            Beta->Tune();
            return Beta;
        }
    };
}