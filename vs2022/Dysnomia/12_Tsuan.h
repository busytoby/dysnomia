#pragma once
#include "11_Xiao.h"

using namespace std;

namespace Dysnomia {
	class Tsuan {
	public:
		Tung* Mu;
		Xiao* Rho;
		Sulphur* Psi;
		Qiao* Nu;
		Iron* Eta;
		Eun* Sigma;
		Eun* Upsilon;
		Qiao* Tau;
		Tin* Theta;
		int Gamma = 1;

		~Tsuan() { 
			if (Theta->Gamma == 1) delete Theta; else Theta->Gamma--;
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		Tsuan(Life*);
		pair<Eun*, Eun*> Kappa();
	};
}