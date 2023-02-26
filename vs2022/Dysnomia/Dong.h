#pragma once
#include "24_Cie.h"

namespace Dysnomia {
    class Dong {
    public:
        Host* Mu;
        Tsong* Rho;
        Cie* Psi;
        Cie* Nu;
        Cie* Eta;
        Cie* Sigma;
        Cie* Upsilon;
        Fao* Tau;
        Feng* Theta;
        int Gamma = 1;

        Dong(Host* Beta) {
            Beta->Gamma++;
            Mu = Beta;

            pair<Eun*, Iron*> Omicron = Mu->Sigma->Mu->Nu->Pi();
            Rho = Mu->Tau->Mu->Mu->Rho->Tau->Pi();

            Psi = new Cie(Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon, Mu->Tau->Mu->Eta->Upsilon->Upsilon, Omicron.first, Omicron.first->Psi, Rho, Mu->Sigma->Mu->Nu);
            Nu = new Cie(Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon, Mu->Tau->Mu->Eta->Upsilon->Upsilon, Omicron.first, new Qiao(Omicron.second), Rho, Psi->Theta->Rho);
            Eta = new Cie(Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon, Mu->Tau->Mu->Eta->Upsilon->Upsilon, Omicron.first, Omicron.first->Psi, Rho, Nu->Theta->Rho);
            Sigma = new Cie(Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon, Mu->Tau->Mu->Eta->Upsilon->Upsilon, Omicron.first, Omicron.first->Psi, Rho, Eta->Theta->Rho);
            Upsilon = new Cie(Mu->Tau->Mu->Eta->Upsilon->Mu->Upsilon, Mu->Tau->Mu->Eta->Upsilon->Upsilon, Omicron.first, new Qiao(Omicron.second), Rho, Sigma->Theta->Rho);

            Tau = new Fao(Upsilon->Theta, Mu->Tau->Mu->Mu->Rho->Tau->Psi);
            Theta = new Feng(Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Faung*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Xi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Faung*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            vector<Faung*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Faung*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Dong() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
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