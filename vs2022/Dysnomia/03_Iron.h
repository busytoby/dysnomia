#pragma once
#include "02_Sulphur.h"

using namespace std;

namespace Dysnomia {
	class Iron {
	public:
		Sulphur* Mu;
		Aluminium* Rho;
		Aluminium* Psi;
		Affinity* Nu;
		Affinity* Eta;
		Affinity* Sigma;
		Sulphur* Upsilon;
		Dynamic* Tau;
		Aluminium* Theta;

		~Iron() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Iron();
		Iron(Sulphur*, Affinity*, Affinity*);
		Iron(Sulphur*, Affinity*, Affinity*, Affinity*, Affinity*);
		Affinity* Beta();
		Affinity* Omicron();
		Affinity* Delta(Affinity*, Affinity*);
		Affinity* Kappa(Aluminium*);
	};
}