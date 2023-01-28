#pragma once
#include "Affinity.h"
#include "Util.h"

using namespace std;

namespace Dysnomia {
	class Aluminium {
	public:
		Dynamic* Mu;
		Affinity* Rho;
		Affinity* Psi;
		Dynamic* Nu;
		Affinity* Eta;
		Dynamic* Sigma;
		Affinity* Upsilon;
		Dynamic* Tau;
		Affinity* Theta;

		~Aluminium() { freeptr(Theta); freeptr(Upsilon); freeptr(Eta); freeptr(Psi); freeptr(Rho); freeptr(Mu); freeptr(Nu); freeptr(Sigma); freeptr(Tau); }
		Aluminium();
		Aluminium(Dynamic*, Int64, Int64, Int64, Int64);
		Aluminium(Affinity*);
		Dynamic* Pi();
	};
}