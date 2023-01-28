#pragma once
#include "11_Xiao.h"

using namespace std;

namespace Dysnomia {
	class Tsuan {
	public:
		Tung* Mu;
		Xiao* Rho;
		Sulphur* Psi;
		Qiao* Nu;
		Iron* Eta;
		Eun* Sigma;
		Eun* Upsilon;
		Qiao* Tau;
		Tin* Theta;

		~Tsuan() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Tsuan(Life*);
		pair<Eun*, Eun*> Kappa();
	};
}