#pragma once
#include "02_Sulphur.h"

using namespace std;

namespace Dysnomia {
	class Iron {
	public:
		Sulphur* Mu;
		Aluminium* Rho;
		Aluminium* Psi;
		Affinity* Nu;
		Affinity* Eta;
		Affinity* Sigma;
		Sulphur* Upsilon;
		Dynamic* Tau;
		Aluminium* Theta;
		int Gamma = 1;

		~Iron() { 	
			if (--Gamma > 0) return;
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Rod->Gamma <= 1 && Sigma->Cone->Gamma <= 1) delete Sigma; else { Sigma->Rod->Gamma--; Sigma->Cone->Gamma--; }
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		Iron();
		Iron(Sulphur*, Affinity*, Affinity*);
		Iron(Sulphur*, Affinity*, Affinity*, Affinity*, Affinity*);
		Affinity* Beta();
		Affinity* Omicron();
		Affinity* Delta(Affinity*, Affinity*);
		Affinity* Kappa(Aluminium*);
	};
}