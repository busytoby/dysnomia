#pragma once
#include "Gue.h"

namespace Dysnomia {
    class Tue {
    public:
        Faung* Mu;
        Faung* Theta;
        int Gamma = 1;

        Tue(Faung* Beta, Xun* Omicron) {
            Beta->Rod->Gamma++;
            Beta->Cone->Gamma++;
            Mu = Beta;
            Theta = Omicron->Theta->Tau->Sigma->Omega(Beta, new Faung());
        }

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha;
            Alpha.push_back(Mu);
            Alpha.push_back(Theta);
            return Alpha;
        }

        ~Tue() {
            if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
            if (Mu->Rod->Gamma <= 1 && Mu->Cone->Gamma <= 1) delete Mu; else { Mu->Rod->Gamma--; Mu->Cone->Gamma--; }
        }
    };
}