#pragma once
#include "Affinity.h"

using namespace std;

namespace Dysnomia {
	class Aluminium {
	public:
		Dynamic* Mu;
		Affinity* Rho;
		Affinity* Psi;
		Dynamic* Nu;
		Affinity* Eta;
		Dynamic* Sigma;
		Affinity* Upsilon;
		Dynamic* Tau;
		Affinity* Theta;

		~Aluminium() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Aluminium();
		Aluminium(Dynamic*, Int64, Int64, Int64, Int64);
		Aluminium(Affinity*);
		Dynamic* Pi();
	};
}