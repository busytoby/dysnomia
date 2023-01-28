#pragma once
#include "01_Aluminium.h"

using namespace std;

namespace Dysnomia {
	class Sulphur {
	public:
		Aluminium* Mu;
		Dynamic* Rho;
		Aluminium* Psi;
		Affinity* Nu;
		Dynamic* Eta;
		Affinity* Sigma;
		Dynamic* Upsilon;
		Aluminium* Tau;
		Dynamic* Theta;
		int Gamma = 1;

		~Sulphur() {
			if (--Gamma > 0) return;
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		
		Sulphur(Affinity* Beta) {
			Beta->Rod->Gamma++;
			Beta->Cone->Gamma++;
			Mu = new Aluminium(Beta);
			Rho = Mu->Pi();
			Psi = new Aluminium(Rho, Mu->Theta->Cone->Base, Mu->Theta->Rod->Signal, Mu->Theta->Cone->Signal, Mu->Theta->Cone->Tau);
			Nu = new Affinity(Mu->Theta->Cone->Base, Mu->Theta->Cone->Element, Mu->Theta->Cone->Manifold, Mu->Theta->Cone->Ring);
			Eta = new Dynamic();
			Sigma = new Affinity(Eta, Nu->Cone->Base, Nu->Cone->Element, Nu->Cone->Barn, Nu->Cone->Tau);
			Upsilon = Psi->Pi();
			Tau = new Aluminium(Upsilon, Mu->Theta->Cone->Base, Mu->Theta->Rod->Signal, Mu->Theta->Cone->Signal, Mu->Theta->Cone->Tau);
			Theta = Tau->Pi();
		}

		Sulphur() {
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
	};
}