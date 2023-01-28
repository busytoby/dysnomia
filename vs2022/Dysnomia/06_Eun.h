#pragma once
#include "05_Tin.h"

using namespace std;

namespace Dysnomia {
	class Eun {
	public:
		Tin* Mu;
		Iron* Rho;
		Qiao* Psi;
		Dynamic* Nu;
		Aluminium* Eta;
		Iron* Sigma;
		Affinity* Upsilon;
		Qiao* Tau;
		Affinity* Theta;

		~Eun() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Eun();
		Eun(Iron*);
		Eun(Tin*, Iron*);
	};
}