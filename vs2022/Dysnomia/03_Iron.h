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
		Dynamic* Upsilon;
		Dynamic* Tau;
		Affinity* Theta;

		Iron();
		Affinity* Beta();
		Affinity* Omicron();
	};
}