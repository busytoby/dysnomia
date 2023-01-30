#pragma once
#include "22_Chi.h"

using namespace std;

namespace Dysnomia {
    class Host {
    public:
        Chi* Rho;
        Wou* Sigma;
        Wou* Tau;
        Qiao* Theta;
        int Gamma = 1;

        Host() {
            Wou* Sigma = new Wou();
            Wou* Tau = new Wou();

            Chi* Rho = new Chi(Sigma, Tau);
            Qiao* Theta = new Qiao(Rho->Psi->Mu);
        }

        vector<Affinity*> Affinities() {
            vector<Affinity*> Alpha(Rho->Affinities());
            vector<Affinity*> Omicron = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Affinity*> Lambda = Tau->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Affinity*> Pi = Theta->Affinities();
            Alpha.insert(Alpha.end(), Pi.begin(), Pi.end());
            return Alpha;
        }

        ~Host() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
            if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
            if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
        }
    };
}