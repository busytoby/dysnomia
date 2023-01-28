#pragma once
#include "12_Tsuan.h"

using namespace std;

namespace Dysnomia {
	class Fao {
	public:
		Tsuan* Mu;
		Tung* Rho;
		Xiao* Psi;
		Qiao* Nu;
		Eun* Eta;
		Iron* Sigma;
		Qiao* Upsilon;
		Tin* Tau;

		~Fao() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); }
		Fao(Life*);
	};
}