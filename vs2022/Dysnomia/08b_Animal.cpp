#pragma once
#include "08b_Animal.h"

namespace Dysnomia {
    Animal::Animal() {
        Mu = new Song();
        Rho = new Eun(Mu->Sigma);
        Psi = new Eun(Rho->Sigma);
        Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Beta(), Mu->Tau->Omicron());
        Eta = new Tin(Nu->Kappa(Mu->Psi));
    }
}