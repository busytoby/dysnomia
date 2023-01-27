#pragma once
#include "01_Aluminium.h"

using namespace std;

namespace Dysnomia {
	class Sulphur {
	public:
		Aluminium* Mu;
		Dynamic* Rho;
		Aluminium* Psi;
		Affinity* Nu;
		Dynamic* Eta;
		Affinity* Sigma;
		Dynamic* Upsilon;
		Aluminium* Tau;
		Dynamic* Theta;

		~Sulphur() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Sulphur();
		Sulphur(Affinity*);
	};
}