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

		~Tin() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Tin();
		Tin(Affinity*);
	};
}