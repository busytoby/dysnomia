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
		Sulphur();
		Sulphur(Affinity*);
	};
}