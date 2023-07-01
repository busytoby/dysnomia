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
            if (Math::POETRY > 0)
                cout << "Host ";
            Sigma = new Wou();
            Tau = new Wou();

            Rho = new Chi(Sigma, Tau);
            Theta = new Qiao(Rho->Psi->Mu);
        }

        Host(Beit* Beta, Beit* Omicron) {
            if (Math::POETRY > 0)
                cout << "Host ";
            Sigma = new Wou(Beta);
            Tau = new Wou(Omicron);

            Rho = new Chi(Sigma, Tau);
            Theta = new Qiao(Rho->Psi->Mu);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Rho->Affinities());
            vector<Faung*> Omicron = Sigma->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Tau->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Pi = Theta->Affinities();
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