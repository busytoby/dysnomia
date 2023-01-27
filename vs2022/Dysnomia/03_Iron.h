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

		~Iron() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Iron();
		Iron(Sulphur*, Affinity*, Affinity*);
		Iron(Sulphur*, Affinity*, Affinity*, Affinity*, Affinity*);
		Affinity* Beta();
		Affinity* Omicron();
		Affinity* Delta(Affinity*, Affinity*);
		Affinity* Kappa(Aluminium*);
	};
}