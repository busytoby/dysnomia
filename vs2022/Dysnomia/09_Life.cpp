#include "09_Nat.h"

namespace Dysnomia {
	Nat::Nat(Life* Beta) {
        Mu = Beta;
        Rho = new Tin(Mu->Upsilon->Rho);
        Psi = new Iron(Mu->Psi->Mu->Sigma, Mu->Psi->Mu->Upsilon->Beta(), Mu->Psi->Mu->Upsilon->Omicron(), Mu->Psi->Mu->Sigma->Nu, Mu->Psi->Mu->Sigma->Sigma);
        Nu = new Iron(Psi->Upsilon, Psi->Beta(), Psi->Omicron());
        Eta = new Eun(Psi);
        Sigma = new Eun(Eta->Sigma);
        Upsilon = Sigma->Sigma->Delta(Sigma->Rho->Beta(), Sigma->Rho->Omicron());
        Tau = new Aluminium(Upsilon);
        Theta = new Qiao(Psi, Upsilon);
	}
}