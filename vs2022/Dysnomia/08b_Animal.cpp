#pragma once
#include "08b_Animal.h"

namespace Dysnomia {
    Animal::Animal() {
        Mu = new Song();
        Rho = new Eun(Mu->Sigma);
        Psi = new Eun(Rho->Sigma);
    }
}