#pragma once
#include <list>
#include <tuple>
#include <string>
#include "Fa.h"

typedef unsigned char BYTE;

namespace Dysnomia {
	class Faung
	{
	private:
		void ConductorGenerate(Int64);
		void OpenManifolds();
		void Ratchet();

	public:
		Fa* Rod;
		Fa* Cone;

		Int64 Phi, Eta, Mu, Xi;
		Int64 Sigma, Rho, Upsilon, Ohm, Pi, Omicron, Omega;

		~Faung() {
			if (Rod->Gamma == 1) delete Rod;
			else Rod->Gamma--;
			if (Cone->Gamma == 1) delete Cone;
			else Cone->Gamma--;
		};
		Faung();
		Faung(Fa*, Fa*);
		Faung(Fa*, Fa*, bool);
		Faung(Int64, Int64, Int64, Int64);
		Faung(Fa*, Int64, Int64, Int64, Int64);
		void FuseAndOpen(Int64, Int64, Int64, Int64);
		void OpenManifolds(Int64);
		void Compare(Faung*, string);
		void Compare(Fa*, string);
		int Find(Int64 N, string);
		//Int64 WaveFunction(String^);
		void Omicron();
		void Iota();
		void Beta(Int64);
		void Theta();
		void Theta(Int64);
		void Charge(Int64);
		void Induce();
		void Torque();
		void Amplify();
		void Sustain();
		void React();
		//array<Faung^>^ Denature();
	};
}