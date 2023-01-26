#pragma once
#include "08a_Plant.h"

namespace Dysnomia {
    Plant::Plant() {
        Song* Mu = new Song();
        Eun* Rho = new Eun(Mu->Tau);
    }
}