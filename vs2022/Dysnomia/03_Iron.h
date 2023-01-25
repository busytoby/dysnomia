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
		void* Tau;
		void* Theta;

		Iron();
		Affinity* Beta();
		Affinity* Omicron();
		Affinity* Delta(Affinity*, Affinity*);
	};
}