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

		~Tsuan() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Tsuan(Life*);
		pair<Eun*, Eun*> Kappa();
	};
}