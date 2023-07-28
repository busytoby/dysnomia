#pragma once
#include "Wou.h"

using namespace std;

namespace Dysnomia {
    class Sing {
    public:
        Sulphur* Mu;
        Iron* Rho;
        Qiao* Psi;
        Tin* Nu;
        Eun* Eta;
        Faung* Sigma;
        Iron* Upsilon;
        Song* Tau;
        Tsong* Theta;
        int Gamma = 1;

        Sing(Wou* Beta, Wou* Iota) {
            if (Math::POETRY > 0)
                cout << "Sing ";
            Mu = Iota->Pi(Beta->Omega());
            Rho = Beta->Tau(Mu, Iota->Nu->Tau->Beta(), Iota->Nu->Tau->Omicron());
            Psi = new Qiao(Rho, Iota->Psi->Rho->Beta());
            Nu = new Tin(Rho->Omicron());
            Eta = new Eun(Nu, Rho);
            Sigma = Iota->Nu->Tau->Omega(Beta->Nu->Tau->Omicron(), Rho->Beta());
            Upsilon = Psi->Omega();
            Tau = new Song(Eta, Sigma);
            Theta = new Tsong(Tau);
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
            Alpha.push_back(Sigma);
            vector<Faung*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Faung*> Xi = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Faung*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Sing() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}