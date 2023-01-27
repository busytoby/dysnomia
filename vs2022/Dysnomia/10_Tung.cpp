#include "10_Tung.h"

namespace Dysnomia {
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