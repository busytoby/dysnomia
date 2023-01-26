#pragma once
#include "04_Qiao.h"

using namespace std;

namespace Dysnomia {
	class Tin {
	public:
		Qiao* Mu;
		Qiao* Rho;
		Affinity* Psi;
		Affinity* Nu;
		Affinity* Eta;
		Sulphur* Sigma;
		Iron* Upsilon;
		Iron* Tau;
		Iron* Theta;

		Tin();
		Tin(Affinity*);
	};
}