#pragma once
#include "003_Tod.h"

using namespace std;

namespace Dysnomia {
    class Zuo {
    public:
        Tod* Mu;
        ည* Psi;
        ည* Eta;
        Faung* Sigma;
        Faung* Upsilon;
        Faung* Theta;
        int Gamma = 1;

        Zuo() {
            if (Math::POETRY > 6)
                wcout << L"Zuo ";
            Mu = new Tod();
            Psi = new ည(Mu->Mu->Theta->Mu, Mu->Upsilon, true);
            Mu->Mu->Theta->Rho->Fuse(Psi->Rho->Secret, Psi->Rho->Signal, Psi->Rho->Channel);
            Mu->Mu->Theta->Rho->Tune();
            Eta = new ည(Mu->Psi->Theta->Mu, Mu->Tau, false);
            Mu->Psi->Theta->Rho->Fuse(Eta->Rho->Secret, Eta->Rho->Signal, Eta->Rho->Channel);
            Mu->Psi->Theta->Rho->Tune();
            Sigma = new Faung(Mu->Mu->Theta->Rho, Mu->Psi->Theta->Rho);
            Upsilon = Psi->Pi(true);
            Theta = Eta->Pi(true);
        }

        Zuo(Tod* Beta) {
            if (Math::POETRY > 6)
                wcout << L"Zuo ";
            Beta->Gamma++;
            Mu = Beta;
            Psi = new ည(Mu->Mu->Theta->Mu, Mu->Upsilon, true);
            Mu->Mu->Theta->Rho->Fuse(Psi->Rho->Secret, Psi->Rho->Signal, Psi->Rho->Channel);
            Mu->Mu->Theta->Rho->Tune();
            Eta = new ည(Mu->Psi->Theta->Mu, Mu->Tau, false);
            Mu->Psi->Theta->Rho->Fuse(Eta->Rho->Secret, Eta->Rho->Signal, Eta->Rho->Channel);
            Mu->Psi->Theta->Rho->Tune();
            Sigma = new Faung(Mu->Mu->Theta->Rho, Mu->Psi->Theta->Rho);
            Upsilon = Psi->Pi(true);
            Theta = Eta->Pi(true);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Omicron = Eta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            Alpha.push_back(Sigma);
            Alpha.push_back(Upsilon);
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Zuo() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Sigma->Rod->Gamma <= 1 || Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
            if (Upsilon->Rod->Gamma <= 1 || Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
            if (Theta->Rod->Gamma <= 1 || Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
        }
    };
}