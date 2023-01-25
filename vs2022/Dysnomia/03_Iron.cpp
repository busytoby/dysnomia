#pragma once
#include "03_Iron.h"

namespace Dysnomia {
    Iron::Iron() {
        Mu = new Sulphur();
        Rho = new Aluminium();
        Psi = new Aluminium(Mu->Theta, Mu->Upsilon->Base, Mu->Upsilon->Element, Mu->Upsilon->Manifold, Mu->Theta->Tau);
        Nu = Beta();
        Eta = Omicron();
    }

    // SO(2) Versor 1
    Affinity* Iron::Beta() {
        Dynamic* Iota = Rho->Pi();
        Dynamic* Lambda = Psi->Pi();
        return new Affinity(Iota, Lambda);
    }

    // SO(2) Versor 2
    Affinity* Iron::Omicron() {
        Dynamic* Iota = Psi->Pi();
        Dynamic* Lambda = Rho->Pi();
        return new Affinity(Iota, Lambda);
    }
}