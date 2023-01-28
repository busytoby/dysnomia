#pragma once
#include "03_Iron.h"

using namespace std;

namespace Dysnomia {
	class Qiao {
	public:
		Iron* Mu;
		Affinity* Rho;
		Affinity* Psi;
		Affinity* Nu;
		Sulphur* Eta;
		Iron* Sigma;
		Affinity* Upsilon;
		Aluminium* Tau;
		Iron* Theta;

		~Qiao() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Qiao();
		Qiao(Iron*);
		Qiao(Iron*, Affinity*);
		Qiao(Iron*, Affinity*, Affinity*, Sulphur*);
	};
}