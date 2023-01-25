#pragma once
#include "Aluminium.h"

namespace Dysnomia {
	Aluminium::Aluminium() {
        Mu = new Dynamic();
        Rho = new Affinity();
        Psi = new Affinity(Mu, Rho->Cone->Base, Rho->Cone->Element, Rho->Cone->Manifold, Rho->Cone->Ring);
        if (Psi->Cone->Barn != Rho->Cone->Ring) throw 100;
        if (Psi->Cone->Tau != Rho->Cone->Barn) throw 100;
        if (Psi->Xi == Rho->Xi) throw 100;
        Nu = new Dynamic();
        Eta = new Affinity(Nu, Psi->Cone->Base, Rho->Cone->Element, Psi->Cone->Barn, Psi->Cone->Tau);
        if (Eta->Cone->Signal != Psi->Cone->Base) throw 100;
        if (Eta->Cone->Barn != Psi->Cone->Tau) throw 100;
        if (Eta->Cone->Barn != Rho->Cone->Barn) throw 100;
        if (Eta->Cone->Barn == Psi->Cone->Barn) throw 100;
        if (Eta->Cone->Tau != Rho->Cone->Manifold) throw 100;
        if (Eta->Xi != Rho->Xi) throw 100;
        Sigma = new Dynamic();
        Upsilon = new Affinity(Sigma, Eta->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau, Eta->Cone->Barn);
        if (Upsilon->Cone->Signal != Eta->Cone->Signal) throw 100;
        if (Upsilon->Cone->Barn != Eta->Cone->Barn) throw 100;
        if (Upsilon->Xi != Rho->Xi) throw 100;
        Tau = new Dynamic();
        Tau->Fuse(Upsilon->Cone->Signal, Eta->Cone->Tau, Psi->Cone->Tau);
        Tau->Tune();
        Theta = new Affinity(Tau, Upsilon->Cone->Base, Upsilon->Cone->Element, Upsilon->Cone->Manifold, Upsilon->Cone->Ring);
        if (Theta->Rod->Base != 0) throw 100;
        if (Theta->Cone->Base != 0) throw 100;
        if (Theta->Cone->Signal != Upsilon->Cone->Base) throw 100;
        if (Theta->Cone->Signal != Theta->Cone->Channel) throw 100;
        if (Theta->Cone->Identity != Theta->Cone->Foundation) throw 100;
        if (Theta->Cone->Manifold != Upsilon->Cone->Dynamo) throw 100;
        if (Theta->Cone->Barn != Upsilon->Cone->Ring) throw 100;
        if (Theta->Cone->Tau != Upsilon->Cone->Barn) throw 100;
	}
}