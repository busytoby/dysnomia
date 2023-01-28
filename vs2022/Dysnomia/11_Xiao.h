#pragma once
#include "10_Tung.h"

using namespace std;

namespace Dysnomia {
	class Xiao {
	public:
		Tung* Mu;
		Song* Rho;
		Aluminium* Psi;
		Affinity* Nu;
		Affinity* Eta;
		Sulphur* Sigma;
		Qiao* Upsilon;
		Eun* Tau;
		Iron* Theta;
		int Gamma = 1;

		~Xiao() {
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Rod->Gamma <= 1 && Eta->Cone->Gamma <= 1) delete Eta; else { Eta->Rod->Gamma--; Eta->Cone->Gamma--; }
			if (Nu->Rod->Gamma <= 1 && Nu->Cone->Gamma <= 1) delete Nu; else { Nu->Rod->Gamma--; Nu->Cone->Gamma--; }
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		Xiao(Tung*);
		pair<Eun*, Iron*> Pi();
	};
}