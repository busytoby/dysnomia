#pragma once
#include "Pin.h"

namespace Dysnomia {
    class Xue {
    public:
        Tong* Mu;
        Nat* Rho;
        Tung* Psi;
        Faung* Nu;
        Faung* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Xiao* Tau;
        Tsuan* Theta;
        int Gamma = 1;

        Xue(Pin* Beta) {
            Mu = new Tong(Beta->Psi->Eta->Eta, Beta->Mu->Sigma->Theta->Psi->Upsilon);
            Rho = new Nat(Mu, Beta->Mu->Sigma->Theta->Nu);
            Psi = new Tung(Rho, Beta->Mu->Theta->Mu->Tau->Psi, Beta->Mu->Mu->Theta);
            vector<Faung*> Pi = Beta->Mu->Omega(Beta->Rho->Eta, Beta->Psi->Nu, Beta->Nu->Upsilon, Beta->Eta->Sigma);
            Nu = Pi.back(); Pi.pop_back();
            Eta = Pi.back(); Pi.pop_back();
            Sigma = Pi.back(); Pi.pop_back();
            Upsilon = Pi.back(); Pi.pop_back();
            Tau = new Xiao(Psi);
            Theta = new Tsuan(Psi, Beta->Mu->Mu->Sigma->Mu->Mu->Mu->Upsilon->Mu->Theta, Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            Alpha.push_back(Nu);
            Alpha.push_back(Eta);
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            vector<Faung*> Omicron = Tau->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Theta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            return Alpha;
        }

        ~Xue() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}