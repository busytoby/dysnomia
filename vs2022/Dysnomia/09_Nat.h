#pragma once
#include "08_Life.h"

namespace Dysnomia {
    class Nat {
    public:
        Life* Mu;
        Tin* Rho;
        Iron* Psi;
        Iron* Nu;
        Eun* Eta;
        Eun* Sigma;
        Faung* Upsilon;
        Aluminium* Tau;
        Qiao* Theta;
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
            Alpha.push_back(Upsilon);
            vector<Faung*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Faung*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Nat() { 
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Nat(Life* Beta, Eun* Omicron) {
            Beta->Gamma++;
            Omicron->Gamma++;
            Mu = Beta;
            Rho = new Tin(Mu->Upsilon->Rho);
            Psi = new Iron(Omicron->Mu->Sigma, Omicron->Rho->Beta(), Omicron->Rho->Omicron(), Omicron->Mu->Sigma->Nu, Omicron->Mu->Sigma->Sigma);
            Nu = new Iron(Psi->Upsilon, Psi->Beta(), Psi->Omicron());
            Eta = Omicron;
            Sigma = new Eun(Eta->Sigma);
            Upsilon = Sigma->Sigma->Delta(Omicron->Sigma->Omicron(), Omicron->Sigma->Beta());
            Tau = new Aluminium(Upsilon);
            Theta = new Qiao(Psi, Upsilon);
        }
        
        Nat(Life* Beta) {
            Beta->Gamma++;
            Mu = Beta;
            Rho = new Tin(Mu->Upsilon->Rho);
            Psi = new Iron(Mu->Psi->Mu->Sigma, Mu->Psi->Mu->Upsilon->Beta(), Mu->Psi->Mu->Upsilon->Omicron(), Mu->Psi->Mu->Sigma->Nu, Mu->Psi->Mu->Sigma->Sigma);
            Nu = new Iron(Psi->Upsilon, Psi->Beta(), Psi->Omicron());
            Eta = new Eun(Psi);
            Sigma = new Eun(Eta->Sigma);
            Upsilon = Sigma->Sigma->Delta(Sigma->Rho->Beta(), Sigma->Rho->Omicron());
            Tau = new Aluminium(Upsilon);
            Theta = new Qiao(Psi, Upsilon);
        }
    };
}