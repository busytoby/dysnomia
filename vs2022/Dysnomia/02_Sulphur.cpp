#pragma once
#include "02_Sulphur.h"

namespace Dysnomia {
	Sulphur::Sulphur() {
        Mu = new Aluminium();
        Rho = Mu->Pi();
        Psi = new Aluminium(Rho, Mu->Theta->Cone->Base, Mu->Theta->Rod->Signal, Mu->Theta->Cone->Signal, Mu->Theta->Cone->Tau);
        Nu = new Affinity(Mu->Theta->Cone->Base, Mu->Theta->Cone->Element, Mu->Theta->Cone->Manifold, Mu->Theta->Cone->Ring);
        Eta = new Dynamic();
        Sigma = new Affinity(Eta, Nu->Cone->Base, Nu->Cone->Element, Nu->Cone->Barn, Nu->Cone->Tau);
        Upsilon = Psi->Pi();
        Tau = new Aluminium(Upsilon, Mu->Theta->Cone->Base, Mu->Theta->Rod->Signal, Mu->Theta->Cone->Signal, Mu->Theta->Cone->Tau);
        Theta = Tau->Pi();
	}
}