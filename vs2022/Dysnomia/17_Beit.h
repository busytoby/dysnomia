#pragma once
#include "16_Rong.h"

using namespace std;

namespace Dysnomia {
    class Beit {
    public:
        Rong* Mu;
        Xiao* Nu;
        Song* Eta;
        Tin* Upsilon;
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

        ~Beit() {
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Beit(Rong* Beta) {
            Beta->Gamma++;
            Mu = Beta;
            Nu = new Xiao(Mu->Rho->Rho);
            Eta = new Song(Beta->Nu);
            Upsilon = new Tin(Eta->Rho);
        }

        Beit() {
            Mu = new Rong();
            Nu = new Xiao(Mu->Mu->Rho);
            Eta = new Song();
            Upsilon = new Tin(Eta->Rho);
        }
    };
}