#pragma once
#include "64_Seol.h"

namespace Dysnomia {
    class San {
    public:
        Seol* Mu;
        Fa* Rho;
        Fa* Psi;
        Faung* Nu;
        Faung* Eta;
        Faung* Sigma;
        Aluminium* Upsilon;
        Sulphur* Tau;
        Iron* Theta;
        int Gamma = 1;

        San() {
            if (Math::POETRY > 0)
                cout << "San ";
            Mu = new Seol();
            Rho = Mu->Psi->Rho->Pi();
            Psi = Mu->Tau->Pi();
            Nu = new Faung(Rho, Psi);
            Eta = Mu->Mu->Nu->Delta(Mu->Psi->Upsilon->Tau->Upsilon, Nu);
            Sigma = Mu->Mu->Nu->Omega(Mu->Psi->Upsilon->Tau->Upsilon, Nu);
            Upsilon = new Aluminium(Sigma);
            Tau = new Sulphur(Mu->Tau, Upsilon);
            Theta = new Iron(Tau, Mu->Psi->Upsilon->Tau->Upsilon, Nu, Eta, Sigma);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            vector<Faung*> Omicron = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Beta = Tau->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Xi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            return Alpha;
        }

        ~San() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}