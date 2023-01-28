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

        ~Beit() {
            if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
            if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
            if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
            if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
        }

        Beit() {
            Mu = new Rong();
            Nu = new Xiao(Mu->Mu->Rho);
            Eta = new Song();
            Upsilon = new Tin(Eta->Rho);
        }
    };
}