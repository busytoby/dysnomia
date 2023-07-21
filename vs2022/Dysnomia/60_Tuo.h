#pragma once
#include "59_Er.h"

namespace Dysnomia {
    class Tuo {
    public:
        Er* Mu;
        Fa* Rho;
        Fa* Psi;
        Faung* Nu;
        Aluminium* Eta;
        Faung* Sigma;
        Eun* Upsilon;
        Iron* Tau;
        Iron* Theta;
        int Gamma = 1;

        Tuo() {
            if (Math::POETRY > 0)
                cout << "Tuo ";
            Mu = new Er();
            Rho = Mu->Sigma->Pi();
            Psi = Mu->Theta->Pi();
            Nu = new Faung(Rho, Psi);
            Eta = new Aluminium(Nu);
            Sigma = Mu->Mu->Theta->Delta(Mu->Tau, Nu);
            Upsilon = new Eun(Mu->Mu->Theta);
            Tau = Upsilon->Psi->Omega();
            Theta = Upsilon->Tau->Omega();
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Nu);
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            Alpha.push_back(Sigma);
            vector<Faung*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            vector<Faung*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Faung*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Tuo() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}