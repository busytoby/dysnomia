#pragma once
#include "07_Song.h"

using namespace std;

namespace Dysnomia {
	class Life {
	public:
		Song* Mu;
		Eun* Rho;
		Eun* Psi;
		Iron* Nu;
		Tin* Eta;
		Qiao* Sigma;
		Song* Upsilon;
		Aluminium* Tau;
		Song* Theta;
		
		~Life() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Life() {};
		Life(Eun*, Eun*);
	};
}