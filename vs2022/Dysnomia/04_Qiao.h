#pragma once
#include "03_Iron.h"

using namespace std;

namespace Dysnomia {
	class Qiao {
	public:
		Iron* Mu;
		Affinity* Rho;
		Affinity* Psi;
		Affinity* Nu;
		Sulphur* Eta;
		Iron* Sigma;
		Affinity* Upsilon;
		Aluminium* Tau;
		Iron* Theta;

		~Qiao() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Qiao();
		Qiao(Iron*);
		Qiao(Iron*, Affinity*);
		Qiao(Iron*, Affinity*, Affinity*, Sulphur*);
	};
}