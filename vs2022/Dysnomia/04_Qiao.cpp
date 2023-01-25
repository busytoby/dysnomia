#pragma once
#include "04_Qiao.h"

namespace Dysnomia {
    Qiao::Qiao() {
        Mu = new Iron();
        Rho = Mu->Omicron();
        Psi = Mu->Beta();
        Nu = Mu->Delta(Rho, Psi);
        Eta = new Sulphur(Nu);
        Sigma = new Iron(Eta, Psi, Rho);
        Upsilon = Sigma->Beta();
        Tau = new Aluminium(Upsilon);
        Theta = new Iron(Mu->Upsilon, Sigma->Omicron(), Mu->Omicron());
    }
}