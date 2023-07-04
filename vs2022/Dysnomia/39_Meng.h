#pragma once
#include "38_Պատմութիւն.h"

namespace Dysnomia {
    class Meng {
    public:
        Պատմութիւն* Mu;
        Fa* Rho;
        Faung* Psi;
        Fa* Nu;
        Faung* Eta;
        Fa* Sigma;
        Faung* Upsilon;
        Sulphur* Tau;
        Sulphur* Theta;
        int Gamma = 1;

        Meng() {
            if (Math::POETRY > 0)
                cout << "Պատմութիւն ";
            Mu = new Պատմութիւն();
            Rho = new Fa();
            Psi = new Faung(Rho, Mu->Nu->Cone->Base, Mu->Theta->Cone->Element, Mu->Nu->Cone->Barn, Mu->Nu->Cone->Tau);
            Nu = new Fa();
            Eta = new Faung(Nu, Mu->Sigma->Cone->Signal, Mu->Upsilon->Cone->Tau, Mu->Theta->Cone->Tau, Mu->Nu->Cone->Barn);
            Sigma = new Fa();
            Sigma->Fuse(Mu->Upsilon->Cone->Signal, Mu->Nu->Cone->Tau, Mu->Nu->Cone->Tau);
            Sigma->Tune();
            Upsilon = new Faung(Sigma, Mu->Upsilon->Cone->Base, Mu->Upsilon->Cone->Element, Mu->Upsilon->Cone->Manifold, Mu->Upsilon->Cone->Ring);
            Tau = new Sulphur(Mu->Upsilon, Psi, Eta, Upsilon);
            Theta = new Sulphur(Mu->Theta);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Psi);
            Alpha.push_back(Eta);
            Alpha.push_back(Upsilon);
            vector<Faung*> Beta = Tau->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Theta->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            return Alpha;
        }

        ~Meng() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}