#include <vector>
#include "003_Tod.h"

using namespace std;

namespace Dysnomia {
    class Zuo {
    public:
        Tod* Mu;
        ညြ* Psi;
        Faung* Eta;
        Fa* Upsilon;
        Fa* Theta;
        int Gamma = 1;

        Zuo() {
            if (Math::POETRY > 0)
                cout << "Zuo ";
            Mu = new Tod();
            Psi = new ညြ(true);
            Eta = new Faung(Psi->Theta->Rho, Mu->Upsilon->Secret, Mu->Upsilon->Signal, Mu->Upsilon->Channel, Mu->Upsilon->Identity);
            Upsilon = Mu->Mu->Pi();
            Theta = Psi->Pi();
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Beta = Psi->Affinities();
            Alpha.insert(Alpha.end(), Beta.begin(), Beta.end());
            Alpha.push_back(Eta);
            return Alpha;
        }

        ~Zuo() {
            if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Eta->Rod->Gamma <= 1 || Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
            if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }
    };
}