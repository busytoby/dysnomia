#pragma once
#include "Host.h"

namespace Dysnomia {
    class Cie {
    public:
        Iron* Mu;
        Qiao* Rho;
        Tin* Psi;
        Eun* Nu;
        Song* Eta;
        Tong* Sigma;
        Nat* Upsilon;
        Tung* Tau;
        Tsuan* Theta;
        int Gamma = 1;

        Cie(Iron* Beta, Affinity* Omicron, Eun* Iota, Qiao* Lambda, Tsong* Alpha, Xiao* Delta) {
            Mu = new Iron();
            Rho = new Qiao(Mu, Beta->Beta(), Beta->Omicron(), Mu->Mu);
            Psi = new Tin(Rho->Psi);
            Nu = new Eun(Psi, Mu);
            Affinity* Xi = Beta->Delta(Nu->Mu->Nu, Omicron);
            Eta = new Song(Nu, Xi);
            Sigma = new Tong(Eta, Xi);
            Upsilon = new Nat(Sigma, Nu);
            Tau = new Tung(Upsilon, Iota, Lambda);
            Theta = new Tsuan(Tau, Alpha, Delta);
        }

        vector<Affinity*> Affinities() {
            vector<Affinity*> Alpha(Mu->Affinities());
            vector<Affinity*> Beta = Rho->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Affinity*> Iota = Psi->Affinities();
            Alpha.insert(Alpha.end(), Iota.begin(), Iota.end());
            vector<Affinity*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Affinity*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Affinity*> Xi = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Xi.begin(), Xi.end());
            vector<Affinity*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            vector<Affinity*> Pi = Tau->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            vector<Affinity*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Cie() {
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