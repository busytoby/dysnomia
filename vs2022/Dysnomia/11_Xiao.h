#pragma once
#include "10_Tung.h"

using namespace std;

namespace Dysnomia {
	class Xiao {
	public:
		Tung* Mu;
		Song* Rho;
		Aluminium* Psi;
		Affinity* Nu;
		Affinity* Eta;
		Sulphur* Sigma;
		Qiao* Upsilon;
		Eun* Tau;
		Iron* Theta;

		~Xiao() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Xiao(Tung*);
		pair<Eun*, Iron*> Pi();
	};
}