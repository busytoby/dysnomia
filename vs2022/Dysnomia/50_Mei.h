#pragma once
#include "49_行.h"

namespace Dysnomia {
    class Mei {
    public:
        行* Mu;
        Sulphur* Rho;
        Iron* Psi;
        Qiao* Nu;
        Iron* Eta;
        Qiao* Sigma;
        Tin* Upsilon;
        Faung* Tau;
        Faung* Theta;
        int Gamma = 1;

        Mei() {
            if (Math::POETRY > 0)
                cout << "Mei ";
            Mu = new 行();
            Rho = new Sulphur(Mu->Eta, Mu->Theta);
            Psi = new Iron(Rho, Mu->Tau, Mu->Nu);
            Nu = new Qiao(Psi, Mu->Tau, Mu->Nu, Rho);
            Eta = Nu->Omega();
            Sigma = new Qiao(Eta);
            Upsilon = new Tin(Nu, Sigma);
            Tau = Upsilon->Tau->Omicron();
            Theta = Upsilon->Theta->Beta();
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Omicron = Rho->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Xi = Nu->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Pi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Faung*> Chi = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            Alpha.push_back(Tau);
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Mei() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Tau->Rod->Gamma <= 1 && Tau->Cone->Gamma <= 1) delete Tau; else { Tau->Rod->Gamma--; Tau->Cone->Gamma--; }
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}