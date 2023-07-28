#pragma once
#include "16_Rong.h"

using namespace std;

namespace Dysnomia {
    class Beit {
    public:
        Rong* Mu;
        Faung* Rho;
        Faung* Psi;
        Xiao* Nu;
        Song* Eta;
        Faung* Sigma;
        Tin* Upsilon;
        Faung* Tau;
        Iron* Theta;
        int Gamma = 1;

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            Alpha.push_back(Rho);
            Alpha.push_back(Psi);
            vector<Faung*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            Alpha.push_back(Sigma);
            vector<Faung*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            Alpha.push_back(Tau);
            vector<Faung*> Chi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Chi.begin(), Chi.end());
            return Alpha;
        }

        ~Beit() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
            if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Beit(Rong* Beta) {
            if (Math::POETRY > 0)
                cout << "Beit ";
            Beta->Gamma++;
            Mu = Beta;
            Rho = Mu->Eta->Omicron();
            Psi = Mu->Tau->Omega(Rho, Mu->Sigma);
            Nu = new Xiao(Mu->Rho->Rho);
            Eta = new Song(Beta->Nu);
            Sigma = Mu->Tau->Delta(Mu->Psi->Nu, Psi);
            Upsilon = new Tin(Eta->Rho);
            Tau = Nu->Theta->Omega(Psi, Sigma);
            Theta = Mu->Theta->Omega();
        }

        Beit() {
            if (Math::POETRY > 0)
                cout << "Beit ";
            Mu = new Rong();
            Rho = Mu->Eta->Omicron();
            Psi = Mu->Tau->Omega(Rho, Mu->Sigma);
            Nu = new Xiao(Mu->Mu->Rho);
            Eta = new Song();
            Sigma = Mu->Tau->Delta(Mu->Psi->Nu, Psi);
            Upsilon = new Tin(Eta->Rho);
            Tau = Nu->Theta->Omega(Psi, Sigma);
            Theta = Mu->Theta->Omega();
        }
    };
}