#pragma once
#include "47_ᠳ‍ᠥ‍ᠢ.h"

namespace Dysnomia {
    class 演 {
    public:
        ᠳ‍ᠥ‍ᠢ* Mu;
        Faung* Rho;
        Faung* Psi;
        Aluminium* Nu;
        Faung* Eta;
        Sulphur* Sigma;
        Iron* Upsilon;
        Faung* Tau;
        Iron* Theta;
        int Gamma = 1;

        演() {
            if (Math::POETRY > 0)
                cout << "演 ";
            Mu = new ᠳ‍ᠥ‍ᠢ();
            Rho = Mu->Theta->Omicron();
            Psi = Mu->Mu->Mu->Mu->Upsilon->Delta(Rho, Mu->Sigma);
            Nu = new Aluminium(Psi);
            Eta = Mu->Theta->Kappa(Nu);
            Sigma = new Sulphur(Eta);
            Upsilon = new Iron(Sigma, Rho, Nu->Rho, Nu->Upsilon, Nu->Theta);
            Tau = Upsilon->Beta();
            Theta = new Iron(Mu->Tau, Tau, Sigma->Mu->Rho);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Psi);
            vector<Faung*> Beta = Nu->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Eta);
            vector<Faung*> Omicron = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Iota = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Tau);
            vector<Faung*> Lambda = Theta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

        ~演() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}