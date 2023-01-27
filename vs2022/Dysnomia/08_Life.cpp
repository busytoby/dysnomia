#pragma once
#include "08_Life.h"

namespace Dysnomia {
    Life::Life(Eun* Beta, Eun* Iota) {
        int DestructiveAvoidances = 0;
        while (DestructiveAvoidances < 10) {
            try {
                Mu = new Song(Beta);
                Rho = Iota;
                Psi = new Eun(Rho->Sigma);
                Nu = new Iron(Mu->Mu->Mu->Sigma, Mu->Tau->Omicron(), Mu->Tau->Beta());
                Eta = new Tin(Nu->Kappa(Mu->Psi));
                Sigma = new Qiao(Nu);
                Upsilon = new Song(Rho);
                Tau = new Aluminium(Eta->Mu->Theta->Omicron());
                Theta = new Song(Psi);
                break;
            }
            catch (int e) { DestructiveAvoidances++; continue; };
        }
    }
}