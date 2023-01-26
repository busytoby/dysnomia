#pragma once
#include "07_Song.h"

namespace Dysnomia {
    Song::Song(Eun* Lambda) {
        Mu = Lambda;
        Rho = Mu->Sigma->Delta(Mu->Rho->Beta(), Mu->Rho->Omicron());
        Psi = new Aluminium(Rho);
        Nu = new Qiao(Mu->Rho, Rho);
        Eta = new Sulphur(Rho);
        Sigma = new Iron(Eta, Mu->Sigma->Omicron(), Mu->Sigma->Beta());
        Upsilon = new Eun(Sigma);
        Tau = new Iron(Upsilon->Mu->Sigma, Sigma->Beta(), Sigma->Omicron());
        Theta = new Qiao(Tau, Mu->Theta);
    }

    Song::Song() {
        Mu = new Eun();
        Rho = Mu->Sigma->Delta(Mu->Rho->Beta(), Mu->Rho->Omicron());
        Psi = new Aluminium(Rho);
        Nu = new Qiao(Mu->Rho, Rho);
        Eta = new Sulphur(Rho);
        Sigma = new Iron(Eta, Mu->Sigma->Omicron(), Mu->Sigma->Beta());
        Upsilon = new Eun(Sigma);
        Tau = new Iron(Upsilon->Mu->Sigma, Sigma->Beta(), Sigma->Omicron());
        Theta = new Qiao(Tau, Mu->Theta);
    }
}