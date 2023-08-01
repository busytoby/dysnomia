#pragma once
#include "003_Tod.h"

using namespace std;

namespace Dysnomia {
    class Zuo {
    public:
        Tod* Mu;
        ည* Psi;
        ည* Eta;
        Fa* Upsilon;
        Fa* Theta;
        int Gamma = 1;

        Zuo() {
            if (Math::POETRY > 0)
                cout << "Zuo ";
            Mu = new Tod();
            Psi = new ည(Mu->Mu->Theta->Mu, Mu->Upsilon);
            Eta = new ည(Mu->Psi->Theta->Mu, Mu->Upsilon);
            Upsilon = Mu->Mu->Pi();
            Theta = Mu->Psi->Pi();
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            vector<Faung*> Omicron = Eta->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            return Alpha;
        }

        ~Zuo() {
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
        }
    };
}