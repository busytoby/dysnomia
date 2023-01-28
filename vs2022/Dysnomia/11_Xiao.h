#pragma once
#include "10_Tung.h"

using namespace std;

namespace Dysnomia {
	class Xiao {
	public:
		Tung* Mu;
		Song* Rho;
		Aluminium* Psi;
		Affinity* Nu;
		Affinity* Eta;
		Sulphur* Sigma;
		Qiao* Upsilon;
		Eun* Tau;
		Iron* Theta;

		~Xiao() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Xiao(Tung*);
		pair<Eun*, Iron*> Pi();
	};
}