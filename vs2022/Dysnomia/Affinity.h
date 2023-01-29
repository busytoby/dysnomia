#pragma once
#include <list>
#include <string>
#include <tuple>
#include "Dynamic.h"

namespace Dysnomia {
	class Affinity
	{
	private:
		void ConductorGenerate(Int64);
		void OpenManifolds();
		void Ratchet();

	public:
		Dynamic* Rod = nullptr;
		Dynamic* Cone = nullptr;

		Int64 Phi, Eta, Mu, Xi;

		~Affinity() {
			if (Rod->Gamma == 1) delete Rod;
			else Rod->Gamma--;
			if (Cone->Gamma == 1) delete Cone;
			else Cone->Gamma--;
		};
		Affinity();
		Affinity(Dynamic*, Dynamic*);
		Affinity(Int64, Int64, Int64, Int64);
		Affinity(Dynamic*, Int64, Int64, Int64, Int64);
		void FuseAndOpen(Int64, Int64, Int64, Int64);
		void OpenManifolds(Int64);
		void Compare(Affinity*, string);
		void Compare(Dynamic*, string);
		int Find(Int64 N, string);
		//Int64 WaveFunction(String^);
		/*
		void Charge(Int64);
		void Induce(Int64);
		void Torque(Int64);
		void Amplify(Int64, bool);
		void Sustain(Int64, bool);
		void React(Int64);
		array<Affinity^>^ Denature();
		*/
	};
}