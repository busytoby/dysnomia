#include "10_Tung.h"

namespace Dysnomia {
	Tung::Tung(Nat* Alpha) {
		Mu = Alpha;
		Rho = new Eun(Mu->Psi);
		Psi = new Song(Mu->Eta);
		Nu = new Qiao(Mu->Nu);
		Eta = new Qiao(Psi->Sigma, Mu->Rho->Theta->Kappa(Nu->Tau));
		Sigma = new Tin(Mu->Mu->Upsilon->Rho);
		Upsilon = new Eun(Mu->Rho, Mu->Nu);
		Tau = new Aluminium(Upsilon->Sigma->Delta(Upsilon->Rho->Omicron(), Upsilon->Rho->Beta()));
		Theta = new Life(Rho, Upsilon);
	}

	Tung::Tung(Life* Alpha) {
		Mu = new Nat(Alpha);
		Rho = new Eun(Mu->Nu);
		Psi = new Song(Mu->Eta);
		Nu = new Qiao(Mu->Psi);
		Eta = new Qiao(Psi->Sigma, Mu->Rho->Theta->Kappa(Nu->Tau));
		Sigma = new Tin(Psi->Rho);
		Upsilon = new Eun();
		Tau = new Aluminium(Upsilon->Sigma->Delta(Upsilon->Rho->Omicron(), Upsilon->Rho->Beta()));
		Theta = new Life(Rho, Upsilon);
	}
}