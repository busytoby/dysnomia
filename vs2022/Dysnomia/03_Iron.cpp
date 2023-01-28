#pragma once
#include "03_Iron.h"
#include "06_Eun.h"

namespace Dysnomia {
    Iron::Iron(Sulphur* Beta, Affinity* Iota, Affinity* Omicron, Affinity* Lambda, Affinity* Xi) {
        Beta->Gamma++;
        Iota->Rod->Gamma++;
        Iota->Cone->Gamma++;
        Omicron->Rod->Gamma++;
        Omicron->Cone->Gamma++;
        Lambda->Rod->Gamma++;
        Lambda->Cone->Gamma++;
        Xi->Rod->Gamma++;
        Xi->Cone->Gamma++;
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
        Xi->Gamma++;
        Iota->Rod->Gamma++;
        Iota->Cone->Gamma++;
        Lambda->Rod->Gamma++;
        Lambda->Cone->Gamma++;
        Mu = Xi;
        Rho = new Aluminium(Iota);
        Psi = new Aluminium(Lambda);
        Nu = Xi->Nu;
        Xi->Nu->Rod->Gamma++;
        Xi->Nu->Cone->Gamma++;
        Eta = Xi->Sigma;
        Xi->Sigma->Rod->Gamma++;
        Xi->Sigma->Cone->Gamma++;
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
        return new Affinity(Rho->Pi(), Psi->Pi());
    }

    // SO(2) Versor 2
    Affinity* Iron::Omicron() {
        return new Affinity(Psi->Pi(), Rho->Pi());
    }

    // SO(3) Versors
    Affinity* Iron::Delta(Affinity* Pi, Affinity* Alpha) {
        return new Affinity(Pi->Cone->Base, Alpha->Cone->Element, Pi->Cone->Barn, Alpha->Cone->Tau);
    }

    // SO(4) Versors
    Affinity* Iron::Kappa(Aluminium* Iota) {
        return new Affinity(Iota->Pi(), Rho->Pi());
    }
}