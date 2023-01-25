#pragma once
#include "Aluminium.h"

namespace Dysnomia {
    Aluminium::Aluminium(Dynamic* Beta, Int64 Iota, Int64 Omicron, Int64 Lambda, Int64 Xi) {
        Mu = new Dynamic();
        Rho = new Affinity(Beta, Iota, Omicron, Lambda, Xi);
        Psi = new Affinity(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
        Nu = new Dynamic();
        Eta = new Affinity(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
        Sigma = new Dynamic();
        Upsilon = new Affinity(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
        Tau = new Dynamic();
        Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
        Tau->Tune();
        Theta = new Affinity(Tau, Upsilon->Cone->Base, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
    }

	Aluminium::Aluminium() {
        Mu = new Dynamic();
        Rho = new Affinity();
        Psi = new Affinity(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
        Nu = new Dynamic();
        Eta = new Affinity(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
        Sigma = new Dynamic();
        Upsilon = new Affinity(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
        Tau = new Dynamic();
        Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
        Tau->Tune();
        Theta = new Affinity(Tau, Upsilon->Cone->Base, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
	}

    Dynamic* Aluminium::Pi() {
        Dynamic* Beta = new Dynamic();
        Beta->Fuse(Theta->Rod->Signal, Theta->Cone->Signal, Theta->Cone->Tau);
        Beta->Tune();
        return Beta;
    }
}