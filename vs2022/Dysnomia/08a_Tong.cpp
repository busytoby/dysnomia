#pragma once
#include "08a_Tong.h"

namespace Dysnomia {
    Tong::Tong() {
        int DestructiveAvoidances = 0;
        while (DestructiveAvoidances < 10) {
            try {
                Mu = new Song();
                Rho = new Eun(Mu->Tau);
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
        if (DestructiveAvoidances >= 10) throw 100;
    }
}