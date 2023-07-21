#pragma once
#include "56_Gun.h"

namespace Dysnomia {
    class Ong {
    public:
        Gun* Mu;
        vector<Faung*> Rho;
        Qiao* Psi;
        Iron* Nu;
        Faung* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Aluminium* Tau;
        Faung* Theta;
        int Gamma = 1;

        Ong() {
            if (Math::POETRY > 0)
                cout << "Ong ";
            Mu = new Gun();
            Rho.push_back(Mu->Theta->Upsilon);
            Rho.push_back(Mu->Theta->Tau->Upsilon);
            Rho.push_back(Mu->Theta->Eta->Upsilon);
            Rho.push_back(Mu->Theta->Sigma->Mu->Sigma);
            Psi = new Qiao(Mu->Upsilon->Mu, Rho.front());
            Nu = new Iron(Psi->Eta, Psi->Mu->Theta->Upsilon, Rho.back());
            Eta = Nu->Beta();
            Sigma = Nu->Omicron();
            Upsilon = Mu->Sigma->Delta(Eta, Sigma);
            Tau = new Aluminium(Upsilon);
            Theta = Mu->Sigma->Kappa(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            for (int i = 0; i < Rho.size(); i++)
                Alpha.push_back(Rho[i]);
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Nu->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            vector<Faung*> Omicron = Tau->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Ong() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            for(int i = 0; i < Rho.size(); i++)
                if (Rho[i]->Rod->Gamma <= 1 && Rho[i]->Cone->Gamma <= 1) delete Rho[i]; else { Rho[i]->Rod->Gamma--; Rho[i]->Cone->Gamma--; }
            Rho.clear();
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}