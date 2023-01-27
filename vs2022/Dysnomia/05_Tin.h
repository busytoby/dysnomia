#pragma once
#include "04_Qiao.h"

using namespace std;

namespace Dysnomia {
	class Tin {
	public:
		Qiao* Mu;
		Qiao* Rho;
		Affinity* Psi;
		Affinity* Nu;
		Affinity* Eta;
		Sulphur* Sigma;
		Iron* Upsilon;
		Iron* Tau;
		Iron* Theta;

		~Tin() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Tin();
		Tin(Affinity*);
	};
}