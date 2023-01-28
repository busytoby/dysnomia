#pragma once
#include "12_Tsuan.h"

using namespace std;

namespace Dysnomia {
	class Fao {
	public:
		Tsuan* Mu;
		Tung* Rho;
		Xiao* Psi;
		Qiao* Nu;
		Eun* Eta;
		Iron* Sigma;
		Qiao* Upsilon;
		Tin* Tau;

		~Fao() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; }
		Fao(Life*);
	};
}