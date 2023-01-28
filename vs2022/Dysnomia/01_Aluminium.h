#pragma once
#include "Affinity.h"
#include "Util.h"

using namespace std;

namespace Dysnomia {
	class Aluminium {
	public:
		Dynamic* Mu;
		Affinity* Rho;
		Affinity* Psi;
		Dynamic* Nu;
		Affinity* Eta;
		Dynamic* Sigma;
		Affinity* Upsilon;
		Dynamic* Tau;
		Affinity* Theta;
		int Gamma = 1;

		~Aluminium() { 
			if (--Gamma > 0) return;
			if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Rod->Gamma <= 1 && Psi->Cone->Gamma <= 1) delete Psi; else { Psi->Rod->Gamma--; Psi->Cone->Gamma--; }
			if (Rho->Rod->Gamma <= 1 && Rho->Cone->Gamma <= 1) delete Rho; else { Rho->Rod->Gamma--; Rho->Cone->Gamma--; }
			if(Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		Aluminium();
		Aluminium(Dynamic*, Int64, Int64, Int64, Int64);
		Aluminium(Affinity*);
		Dynamic* Pi();
	};
}