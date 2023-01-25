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

		Iron();
		Iron(Sulphur*, Affinity*, Affinity*);
		Affinity* Beta();
		Affinity* Omicron();
		Affinity* Delta(Affinity*, Affinity*);
		Affinity* Kappa(Aluminium*);
	};
}