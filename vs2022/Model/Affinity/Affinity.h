#pragma once

using namespace System;
using namespace System::Numerics;
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
		void ConductorGenerate(BigInteger);
		void OpenManifolds();
		void Ratchet();

	public:
		Dynamic^ Rod;
		Dynamic^ Cone;
		BigInteger Phi, Eta, Mu, /* Sigma, Rho, Upsilon, Ohm, Pi, Omicron, Omega */ Xi;

		Affinity();
		Affinity::Affinity(Dynamic^, Dynamic^);
		Affinity::Affinity(BigInteger, BigInteger, BigInteger, BigInteger);
		Affinity::Affinity(Dynamic^, BigInteger, BigInteger, BigInteger, BigInteger);
		void FuseAndOpen(BigInteger, BigInteger, BigInteger, BigInteger);
		void OpenManifolds(BigInteger);
		BigInteger WaveFunction(String^);
		/*
		void Charge(BigInteger);
		void Induce(BigInteger);
		void Torque(BigInteger);
		void Amplify(BigInteger, bool);
		void Sustain(BigInteger, bool);
		void React(BigInteger);
		array<Affinity^>^ Denature();
		*/
	};
}
