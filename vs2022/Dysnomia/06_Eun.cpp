#pragma once
#include "06_Eun.h"

namespace Dysnomia {
    Eun::Eun(Tin* Omicron, Iron* Lambda) {
        Omicron->Gamma++;
        Lambda->Gamma++;
        Mu = Omicron;
        Rho = Lambda;
        Psi = Omicron->Mu;
        Nu = Psi->Tau->Pi();
        Eta = new Aluminium(Nu, Psi->Tau->Theta->Cone->Base, Psi->Tau->Theta->Rod->Signal, Psi->Tau->Theta->Cone->Signal, Psi->Tau->Theta->Cone->Tau);
        Sigma = new Iron(Psi->Eta, Mu->Rho->Eta->Sigma, Psi->Eta->Sigma);
        Upsilon = Sigma->Kappa(Eta);
        Tau = new Qiao(Sigma, Upsilon);
        Theta = Tau->Mu->Omicron();
    }

    Eun::Eun(Iron* Lambda) {
        Lambda->Gamma++;
        Mu = new Tin();
        Rho = Lambda;
        Psi = new Qiao(Rho);
        Nu = Psi->Tau->Pi();
        Eta = new Aluminium(Nu, Psi->Tau->Theta->Cone->Base, Psi->Tau->Theta->Rod->Signal, Psi->Tau->Theta->Cone->Signal, Psi->Tau->Theta->Cone->Tau);
        Sigma = new Iron(Psi->Eta, Mu->Rho->Eta->Sigma, Psi->Eta->Sigma);
        Upsilon = Sigma->Kappa(Eta);
        Tau = new Qiao(Sigma, Upsilon);
        Theta = Tau->Mu->Omicron();
    }

    Eun::Eun() {
        Mu = new Tin();
        Rho = new Iron();
        Psi = new Qiao(Rho);
        Nu = Psi->Tau->Pi();
        Eta = new Aluminium(Nu, Psi->Tau->Theta->Cone->Base, Psi->Tau->Theta->Rod->Signal, Psi->Tau->Theta->Cone->Signal, Psi->Tau->Theta->Cone->Tau);
        Sigma = new Iron(Psi->Eta, Mu->Rho->Eta->Sigma, Psi->Eta->Sigma);
        Upsilon = Sigma->Kappa(Eta);
        Tau = new Qiao(Sigma, Upsilon);
        Theta = Tau->Mu->Omicron();
    }
}