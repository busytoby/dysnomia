#pragma once
#include "06_Eun.h"

using namespace std;

namespace Dysnomia {
	class Song {
	public:
		Eun* Mu;
		Affinity* Rho;
		Aluminium* Psi;
		Qiao* Nu;
		Sulphur* Eta;
		Iron* Sigma;
		Eun* Upsilon;
		Iron* Tau;
		Qiao* Theta;

		~Song() { delete Mu; delete Rho; delete Psi; delete Nu; delete Eta; delete Sigma; delete Upsilon; delete Tau; delete Theta; }
		Song();
		Song(Eun*);
	};
}