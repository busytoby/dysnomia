#pragma once
#include "04_Qiao.h"

namespace Dysnomia {
    Qiao::Qiao(Iron* Omega, Affinity* Pi) {
        Mu = Omega;
        Rho = Mu->Beta();
        Psi = Pi;
        Nu = Mu->Delta(Psi, Rho);
        Eta = new Sulphur(Nu);
        Sigma = new Iron(Eta, Psi, Rho);
        Upsilon = Sigma->Beta();
        Tau = new Aluminium(Upsilon);
        Theta = new Iron(Mu->Upsilon, Sigma->Omicron(), Mu->Omicron());
    }

    Qiao::Qiao(Iron* Omega) {
        Mu = Omega;
        Rho = Mu->Beta();
        Psi = Mu->Omicron();
        Nu = Mu->Delta(Psi, Rho);
        Eta = new Sulphur(Nu);
        Sigma = new Iron(Eta, Psi, Rho);
        Upsilon = Sigma->Beta();
        Tau = new Aluminium(Upsilon);
        Theta = new Iron(Mu->Upsilon, Sigma->Omicron(), Mu->Omicron());
    }

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