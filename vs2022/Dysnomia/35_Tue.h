#pragma once
#include "Gue.h"

namespace Dysnomia {
    class Tue {
    public:
        Faung* Mu;
        Fa* Eta;
        Faung* Theta;
        int Gamma = 1;

        Tue(Faung* Beta) {
            Beta->Rod->Gamma++;
            Beta->Cone->Gamma++;
            Mu = Beta;
            Eta = new Fa();
            Theta = new Faung(Eta, Beta->Rod->Base, Beta->Cone->Element, Beta->Rod->Barn, Beta->Cone->Tau);
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha;
            Alpha.push_back(Mu);
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Tue() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Mu->Rod->Gamma <= 1 && Mu->Cone->Gamma <= 1) delete Mu; else { Mu->Rod->Gamma--; Mu->Cone->Gamma--; }
        }
    };
}