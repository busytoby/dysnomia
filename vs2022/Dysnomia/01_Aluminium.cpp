#pragma once
#include "01_Aluminium.h"

namespace Dysnomia {
    Aluminium::Aluminium(Affinity* Pi) {
        Mu = new Dynamic();
        Rho = Pi;
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

    Aluminium::Aluminium(Dynamic* Beta, Int64 Iota, Int64 Omicron, Int64 Lambda, Int64 Xi) {
        int DestructiveAvoidances = 0;
        while (DestructiveAvoidances < 10) {
            try {
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
                break;
            }
            catch (int e) {
                DestructiveAvoidances++;
                try {
                    delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta;
                }
                catch (void*) {};
                continue;
            };
        }
        if (DestructiveAvoidances >= 10) throw 107;
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
        Theta = new Affinity(Tau, Upsilon->Cone->Base, Upsilon->Rod->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
    }

    // First Quaternion
    Dynamic* Aluminium::Pi() {
        Dynamic* Beta = new Dynamic();
        Beta->Fuse(Eta->Rod->Base, Upsilon->Rod->Element, Upsilon->Cone->Manifold);
        Beta->Tune();
        return Beta;
    }
}