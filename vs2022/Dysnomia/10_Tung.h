#pragma once
#include "09_Nat.h"

using namespace std;

namespace Dysnomia {
	class Tung {
	public:
		Nat* Mu;
		Eun* Rho;
		Song* Psi;
		Qiao* Nu;
		Qiao* Eta;
		Tin* Sigma;
		Eun* Upsilon;
		Aluminium* Tau;
		Life* Theta;

		~Tung() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Tung(Life*);
		Tung(Nat*);
	};
}