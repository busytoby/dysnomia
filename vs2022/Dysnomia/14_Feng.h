#pragma once
#include "08a_Tong.h"
#include "13_Fao.h"

using namespace std;

namespace Dysnomia {
    class Feng {
    public:
        Life* Mu;
        Fao* Rho;
        Tung* Psi;
        Xiao* Nu;
        Qiao* Eta;
        Iron* Sigma;
        Qiao* Upsilon;
        Xiao* Tau;
        Tsuan* Theta;
        int Gamma = 1;

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

        ~Feng() {
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Feng(Fao* Beta, Tung* Omicron) {
            if (Math::POETRY > 0)
                cout << "Feng ";
            Beta->Gamma++;
            Omicron->Gamma++;
            Mu = Beta->Pi();
            Rho = Beta;
            Psi = Omicron;
            Nu = new Xiao(Psi);
            Eta = new Qiao(Nu->Theta, Nu->Theta->Beta(), Nu->Theta->Omicron(), Psi->Theta->Mu->Eta);
            Sigma = new Iron(Psi->Theta->Mu->Eta, Eta->Nu, Psi->Mu->Nu->Omicron());
            Upsilon = new Qiao(Sigma, Psi->Tau->Upsilon, Psi->Tau->Psi, Psi->Theta->Mu->Eta);
            Tau = new Xiao(Omicron);
            Theta = new Tsuan(new Tung(Rho->Pi()), Tau, Beta->Eta->Sigma->Upsilon, Upsilon);
        }

        Feng(Fao* Beta) {
            if (Math::POETRY > 0)
                cout << "Feng ";
            Beta->Gamma++;
            Mu = Beta->Pi();
            Rho = Beta;
            Psi = new Tung(Rho->Pi());
            Nu = new Xiao(Psi);
            Eta = new Qiao(Nu->Theta, Nu->Theta->Beta(), Nu->Theta->Omicron(), Psi->Theta->Mu->Eta);
            Sigma = new Iron(Psi->Theta->Mu->Eta, Eta->Nu, Psi->Mu->Nu->Omicron());
            Upsilon = new Qiao(Sigma, Mu->Psi->Upsilon, Rho->Eta->Upsilon, Psi->Theta->Mu->Eta);
            Tau = new Xiao(Nu->Mu);
            Theta = new Tsuan(Psi, Nu, Psi->Theta->Mu->Eta, Eta);
        }

        Feng() {
            if (Math::POETRY > 0)
                cout << "Feng ";
            Mu = new Tong();
            Rho = new Fao(Mu);
            Psi = new Tung(Rho->Pi());
            Nu = new Xiao(Psi);
            Eta = new Qiao(Nu->Theta, Nu->Theta->Beta(), Nu->Theta->Omicron(), Psi->Theta->Mu->Eta);
            Sigma = new Iron(Psi->Theta->Mu->Eta, Eta->Nu, Psi->Mu->Nu->Omicron());
            Upsilon = new Qiao(Sigma, Mu->Psi->Upsilon, Rho->Eta->Upsilon, Psi->Theta->Mu->Eta);
            Tau = new Xiao(Nu->Mu);
            Theta = new Tsuan(Psi, Nu, Psi->Theta->Mu->Eta, Eta);
        }
    };
}