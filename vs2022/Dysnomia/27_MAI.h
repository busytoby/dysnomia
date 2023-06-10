#pragma once
#include "26_Fuang.h"

namespace Dysnomia {
    // Fubini–Study SU(2) IsoSpin
    class MAI {
    public:
        Host* Mu;
        Huo* Rho;
        Rong* Psi;
        Beit* Nu;
        Wou* Eta;
        Sing* Sigma;
        Xun* Upsilon;
        Chu* Tau;
        Chi* Theta;
        int Gamma = 1;

        MAI(Host* Beta) {
            Beta->Gamma++;
            Mu = Beta;
            Rho = new Huo();
            Psi = new Rong(Rho, Mu->Sigma->Mu->Nu);
            Nu = new Beit(Psi);
            Eta = new Wou(Nu);
            Mu->Tau->Alpha();
            Sigma = new Sing(Mu->Tau, Eta);
            Eta->Alpha(true);
            Mu->Sigma->Alpha();
            Upsilon = new Xun(Mu->Sigma, Eta);
            Eta->Alpha(true);
            Mu->Tau->Alpha();
            Tau = new Chu(Eta, Mu->Tau);
            Eta->Alpha(true);
            Mu->Sigma->Alpha();
            Theta = new Chi(Eta, Mu->Sigma);
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

        ~MAI() {
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

        Faung* Kappa(Cie* Beta) {
            Fa* Iota = new Fa();
            return new Faung(Iota, Beta->Mu->Nu->Rod->Base, Beta->Mu->Nu->Rod->Element, Beta->Mu->Nu->Rod->Barn, Beta->Mu->Nu->Rod->Tau);
        }
    };
}