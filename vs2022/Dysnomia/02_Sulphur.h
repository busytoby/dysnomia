#pragma once
#include "01_Aluminium.h"

using namespace std;

namespace Dysnomia {
	class Sulphur {
	public:
		Aluminium* Mu;
		Dynamic* Rho;
		Aluminium* Psi;
		Affinity* Nu;
		Dynamic* Eta;
		Affinity* Sigma;
		Dynamic* Upsilon;
		Aluminium* Tau;
		Dynamic* Theta;

		~Sulphur() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Sulphur();
		Sulphur(Affinity*);
	};
}