#pragma once
#include "46_Xin.h"

namespace Dysnomia {
    class ᠳ‍ᠥ‍ᠢ {
    public:
        Xin* Mu;
        Faung* Rho;
        Fa* Psi;
        Fa* Nu;
        Faung* Eta;
        Faung* Sigma;
        Aluminium* Upsilon;
        Sulphur* Tau;
        Iron* Theta;
        int Gamma = 1;

        ᠳ‍ᠥ‍ᠢ() {
            if (Math::POETRY > 0)
                cout << "ᠳ‍ᠥ‍ᠢ ";
            Mu = new Xin();
            Rho = Mu->Theta->Omicron();
            Psi = Mu->Mu->Mu->Mu->Theta->Pi();
            Nu = Mu->Mu->Mu->Mu->Eta->Pi();
            Eta = new Faung(Psi, Nu);
            Sigma = Mu->Theta->Delta(Rho, Eta);
            Upsilon = new Aluminium(Sigma);
            Tau = new Sulphur(Mu->Sigma, Upsilon);
            Theta = new Iron(Tau, Rho, Sigma);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            vector<Faung*> Beta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Omicron = Tau->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Iota = Theta->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            return Alpha;
        }

        ~ᠳ‍ᠥ‍ᠢ() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}