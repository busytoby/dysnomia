#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class AffinityException : public Exception {
	public:
		int Code;
		String^ Description;

		AffinityException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Affinity : Epsilon
	{
	private:
		void ConductorGenerate(Int64);
		void OpenManifolds();
		void Ratchet();

	public:
		Dynamic^ Rod;
		Dynamic^ Cone;
		Int64 Phi, Eta, Mu, /* Sigma, Rho, Upsilon, Ohm, Pi, Omicron, Omega */ Xi;

		Affinity();
		Affinity::Affinity(Dynamic^, Dynamic^);
		Affinity::Affinity(Int64, Int64, Int64, Int64);
		Affinity::Affinity(Dynamic^, Int64, Int64, Int64, Int64);
		void FuseAndOpen(Int64, Int64, Int64, Int64);
		void OpenManifolds(Int64);
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
