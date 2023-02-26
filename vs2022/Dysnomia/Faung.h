#pragma once
#include <list>
#include <string>
#include <tuple>
#include "Fa.h"

namespace Dysnomia {
	class Faung
	{
	private:
		void ConductorGenerate(Int64);
		void OpenManifolds();
		void Ratchet();

	public:
		Fa* Rod = nullptr;
		Fa* Cone = nullptr;

		Int64 Phi, Eta, Mu, Xi;

		~Faung() {
			if (Rod->Gamma == 1) delete Rod;
			else Rod->Gamma--;
			if (Cone->Gamma == 1) delete Cone;
			else Cone->Gamma--;
		};
		Faung();
		Faung(Fa*, Fa*);
		Faung(Int64, Int64, Int64, Int64);
		Faung(Fa*, Int64, Int64, Int64, Int64);
		void FuseAndOpen(Int64, Int64, Int64, Int64);
		void OpenManifolds(Int64);
		void Compare(Faung*, string);
		void Compare(Fa*, string);
		int Find(Int64 N, string);
		//Int64 WaveFunction(String^);
		/*
		void Charge(Int64);
		void Induce(Int64);
		void Torque(Int64);
		void Amplify(Int64, bool);
		void Sustain(Int64, bool);
		void React(Int64);
		array<Faung^>^ Denature();
		*/
	};
}