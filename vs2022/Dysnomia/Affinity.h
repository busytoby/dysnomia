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
		Dynamic* Rod;
		Dynamic* Cone;
		Int64 Phi, Eta, Mu, /* Sigma, Rho, Upsilon, Ohm, Pi, Omicron, Omega */ Xi;

		Affinity();
		Affinity(Dynamic*, Dynamic*);
		Affinity(Int64, Int64, Int64, Int64);
		Affinity(Dynamic*, Int64, Int64, Int64, Int64);
		void FuseAndOpen(Int64, Int64, Int64, Int64);
		void OpenManifolds(Int64);
		void Compare(Affinity*);
		void Compare(Dynamic*);
		list<string>* Find(Int64 N);
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