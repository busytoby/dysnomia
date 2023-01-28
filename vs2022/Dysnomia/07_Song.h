#pragma once
#include "06_Eun.h"

using namespace std;

namespace Dysnomia {
	class Song {
	public:
		Eun* Mu;
		Affinity* Rho;
		Aluminium* Psi;
		Qiao* Nu;
		Sulphur* Eta;
		Iron* Sigma;
		Eun* Upsilon;
		Iron* Tau;
		Qiao* Theta;

		~Song() { freeptr(Mu); freeptr(Rho); freeptr(Psi); freeptr(Nu); freeptr(Eta); freeptr(Sigma); freeptr(Upsilon); freeptr(Tau); freeptr(Theta); }
		Song();
		Song(Eun*);
	};
}