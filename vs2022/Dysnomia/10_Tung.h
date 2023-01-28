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

		~Tung() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Tung(Life*);
		Tung(Nat*);
	};
}