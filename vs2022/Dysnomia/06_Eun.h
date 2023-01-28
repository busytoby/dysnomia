#pragma once
#include "05_Tin.h"

using namespace std;

namespace Dysnomia {
	class Eun {
	public:
		Tin* Mu;
		Iron* Rho;
		Qiao* Psi;
		Dynamic* Nu;
		Aluminium* Eta;
		Iron* Sigma;
		Affinity* Upsilon;
		Qiao* Tau;
		Affinity* Theta;
		int Gamma = 1;

		~Eun() { 
			if (Theta->Rod->Gamma <= 1 && Theta->Cone->Gamma <= 1) delete Theta; else { Theta->Rod->Gamma--; Theta->Cone->Gamma--; }
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Rod->Gamma <= 1 && Upsilon->Cone->Gamma <= 1) delete Upsilon; else { Upsilon->Rod->Gamma--; Upsilon->Cone->Gamma--; }
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		Eun();
		Eun(Iron*);
		Eun(Tin*, Iron*);
	};
}