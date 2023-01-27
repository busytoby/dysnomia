#pragma once
#include "05_Tin.h"

using namespace std;

namespace Dysnomia {
	class Eun {
	public:
		Tin* Mu;
		Iron* Rho;
		Qiao* Psi;
		Dynamic* Nu;
		Aluminium* Eta;
		Iron* Sigma;
		Affinity* Upsilon;
		Qiao* Tau;
		Affinity* Theta;

		~Eun() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Eun();
		Eun(Iron*);
	};
}