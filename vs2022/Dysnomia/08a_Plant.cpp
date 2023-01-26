#pragma once
#include "08a_Plant.h"

namespace Dysnomia {
    Plant::Plant() {
        Mu = new Song();
        Rho = new Eun(Mu->Tau);
        Psi = new Eun(Rho->Sigma);
        Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Omicron(), Mu->Tau->Beta());
        Eta = new Tin(Nu->Kappa(Mu->Psi));
        Sigma = new Qiao(Nu);
        Upsilon = new Song(Rho);
    }
}