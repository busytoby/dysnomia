#pragma once
#include "08b_Animal.h"

namespace Dysnomia {
    Animal::Animal() {
        Song* Mu = new Song();
        Eun* Rho = new Eun(Mu->Sigma);
    }
}