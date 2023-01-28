#pragma once
#include "08b_Tsong.h"

namespace Dysnomia {
    Tsong::Tsong() {
        Mu = new Song();
        Rho = new Eun(Mu->Sigma);
        Psi = new Eun(Rho->Sigma);
        Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Beta(), Mu->Tau->Omicron());
        Eta = new Tin(Nu->Kappa(Mu->Psi));
        Sigma = new Qiao(Nu, Rho->Mu->Nu);
        Upsilon = new Song(Psi);
        Tau = new Aluminium(Eta->Mu->Theta->Beta());
        Theta = new Song(Rho);
    }
}