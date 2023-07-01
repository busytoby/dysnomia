#pragma once
#include "Dong.h"

namespace Dysnomia {
    // SO(8) Versor
    class Fuang {
    public:
        Dong* Mu;
        Huo* Rho;
        Rong* Psi;
        Beit* Nu;
        Wou* Eta;
        Sing* Sigma;
        Xun* Upsilon;
        Chu* Tau;
        Chi* Theta;
        int Gamma = 1;

        Fuang(Host* Beta) {
            if (Math::POETRY > 0)
                cout << "Fuang ";
            Beta->Gamma++;
            Mu = new Dong(Beta);
            Rho = new Huo(Mu->Theta, Mu->Eta->Tau, Mu->Psi->Theta->Rho, Mu->Upsilon->Rho, Mu->Tau->Rho, Mu->Nu->Theta, Mu->Tau);
            Psi = new Rong(Rho, Mu->Sigma->Theta->Rho);
            Nu = new Beit(Psi);
            Eta = new Wou(Nu);
            Mu->Mu->Sigma->Alpha();
            Sigma = new Sing(Mu->Mu->Sigma, Eta);
            Eta->Alpha(true);
            Mu->Mu->Tau->Alpha();
            Upsilon = new Xun(Mu->Mu->Tau, Eta);
            Eta->Alpha(true);
            Mu->Mu->Sigma->Alpha();
            Tau = new Chu(Eta, Mu->Mu->Sigma);
            Eta->Alpha(true);
            Mu->Mu->Tau->Alpha();
            Theta = new Chi(Eta, Mu->Mu->Tau);
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

        ~Fuang() {
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