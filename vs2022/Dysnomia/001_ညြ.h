#pragma once
#include <vector>
#include "Faung.h"

using namespace std;

namespace Dysnomia {
    class ညြ {
    public:
        Faung* Mu;
        Fa* Rho;
        Faung* Psi;
        Fa* Eta;
        Faung* Sigma;
        Fa* Theta;
        static bool RAPHE_NEBULAE;

        ညြ() {
            if (Math::POETRY > 0)
                cout << "ညြ ";
            Mu = new Faung();
            Rho = new Fa();
            Psi = new Faung(Rho, Mu->Cone->Base, Mu->Cone->Element, Mu->Cone->Manifold, Mu->Cone->Ring);
            Eta = new Fa();
            if (RAPHE_NEBULAE)
                Sigma = new Faung(Eta, Psi->Rod->Base, Mu->Rod->Element, Psi->Rod->Barn, Psi->Rod->Tau);
            else
                Sigma = new Faung(Eta, Psi->Cone->Base, Mu->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
            Theta = new Fa();
        }

        vector<Faung*> Affinities() { return vector<Faung*>({ Mu, Psi, Sigma }); }

        ~ညြ() {
            delete Theta;
            delete Sigma;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            delete Psi;
            delete Rho;
            delete Mu;
        }

        Fa* Pi() {
            Fa* Beta = new Fa();
            if(RAPHE_NEBULAE)
                Beta->Fuse(Psi->Cone->Base, Psi->Cone->Element, Sigma->Rod->Manifold);
            else
                Beta->Fuse(Psi->Rod->Base, Psi->Rod->Element, Sigma->Cone->Manifold);
            Beta->Tune();
            return Beta;
        }
    };
}