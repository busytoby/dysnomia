#pragma once
#include "33_Wong.h"

using namespace std;

namespace Dysnomia {
    class Sze {
    public:
        Wong* Mu;
        Xiao* Nu;
        Wou* Eta;
        Wou* Upsilon;
        int Gamma = 1;

        vector<Faung*> Affinities() {
            vector<Faung*> Alpha(Mu->Affinities());
            vector<Faung*> Omicron = Nu->Affinities();
            Alpha.insert(Alpha.end(), Omicron.begin(), Omicron.end());
            vector<Faung*> Lambda = Eta->Affinities();
            Alpha.insert(Alpha.end(), Lambda.begin(), Lambda.end());
            vector<Faung*> Delta = Upsilon->Affinities();
            Alpha.insert(Alpha.end(), Delta.begin(), Delta.end());
            return Alpha;
        }

        ~Sze() {
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Sze(Wong* Beta) {
            Beta->Gamma++;
            Mu = Beta;
            Nu = new Xiao(new Tung(Mu->Eta, Mu->Mu->Mu->Sigma->Sigma->Tau, Mu->Mu->Theta));
            Eta = new Wou(Mu->Mu->Mu->Mu->Sigma->Mu->Rho->Mu->Eta);
            Upsilon = new Wou(Mu->Mu->Mu->Mu->Sigma->Nu);
        }
    };
}