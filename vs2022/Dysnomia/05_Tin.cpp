#pragma once
#include "05_Tin.h"

namespace Dysnomia {
    Tin::Tin() {
        Mu = new Qiao();
        Rho = new Qiao();
        Psi = Mu->Sigma->Omicron();
        Nu = Rho->Sigma->Omicron();
        Eta = Mu->Sigma->Delta(Psi, Nu);
        Sigma = new Sulphur(Eta);
        Upsilon = new Iron(Sigma, Nu, Psi);
        Tau = new Iron(Upsilon->Upsilon, Psi, Nu);
        Theta = new Iron(Tau->Upsilon, Upsilon->Beta(), Tau->Beta());
    }
}