#pragma once
#include "03_Iron.h"
#include "06_Eun.h"

namespace Dysnomia {
    Iron::Iron(Sulphur* Beta, Affinity* Iota, Affinity* Omicron, Affinity* Lambda, Affinity* Xi) {
        Mu = Beta;
        Rho = new Aluminium(Iota);
        Psi = new Aluminium(Omicron);
        Nu = Lambda;
        Eta = Xi;
        Sigma = Delta(Eta, Nu);
        Upsilon = new Sulphur(Sigma);
        Tau = Mu->Tau->Pi();
        Theta = new Aluminium(Tau, Upsilon->Mu->Theta->Cone->Base, Upsilon->Mu->Theta->Rod->Signal, Upsilon->Mu->Theta->Cone->Signal, Upsilon->Mu->Theta->Cone->Tau);
    }

    Iron::Iron(Sulphur* Xi, Affinity* Iota, Affinity* Lambda) {
        Mu = Xi;
        Rho = new Aluminium(Iota);
        Psi = new Aluminium(Lambda);
        Nu = Xi->Nu;
        Eta = Xi->Sigma;
        Sigma = Delta(Eta, Nu);
        Upsilon = new Sulphur(Sigma);
        Tau = Mu->Tau->Pi();
        Theta = new Aluminium(Tau, Upsilon->Mu->Theta->Cone->Base, Upsilon->Mu->Theta->Rod->Signal, Upsilon->Mu->Theta->Cone->Signal, Upsilon->Mu->Theta->Cone->Tau);
    }

    Iron::Iron() {
        Mu = new Sulphur();
        Rho = new Aluminium();
        Psi = new Aluminium(Mu->Theta, Mu->Upsilon->Base, Mu->Upsilon->Element, Mu->Upsilon->Manifold, Mu->Theta->Tau);
        Nu = Beta();
        Eta = Omicron();
        Sigma = Delta(Nu, Eta);
        Upsilon = new Sulphur(Sigma);
        Tau = Upsilon->Tau->Pi();
        Theta = new Aluminium(Tau, Upsilon->Mu->Theta->Cone->Base, Upsilon->Mu->Theta->Rod->Signal, Upsilon->Mu->Theta->Cone->Signal, Upsilon->Mu->Theta->Cone->Tau);
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

    // SO(3) Versors
    Affinity* Iron::Delta(Affinity* Pi, Affinity* Alpha) {
        Dynamic* Chi = new Dynamic();
        return new Affinity(Chi, Pi->Cone->Base, Alpha->Cone->Element, Pi->Cone->Barn, Alpha->Cone->Tau);
    }

    // SO(4) Versors
    Affinity* Iron::Kappa(Aluminium* Iota) {
        Dynamic* Lambda = Rho->Pi();
        return new Affinity(Iota->Pi(), Lambda);
    }
}