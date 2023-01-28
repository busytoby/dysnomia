#pragma once
#include "07_Song.h"

using namespace std;

namespace Dysnomia {
	class Life {
	public:
		Song* Mu;
		Eun* Rho;
		Eun* Psi;
		Iron* Nu;
		Tin* Eta;
		Qiao* Sigma;
		Song* Upsilon;
		Aluminium* Tau;
		Song* Theta;
		
		~Life() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Life() {};
		Life(Eun*, Eun*);
	};
}