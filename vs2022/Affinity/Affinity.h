#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Affinity
	{
	private:
		Dynamic^ Rod;
		void ConductorGenerate(BigInteger);
		void OpenManifolds();
		void Ratchet();

	public:
		Dynamic^ Cone;

		BigInteger Phi, Eta, Mu, Sigma, Rho, Upsilon, Ohm, Pi, Omicron, Xi, Omega;

		Affinity();
		Affinity::Affinity(BigInteger, BigInteger, BigInteger, BigInteger);
		void OpenManifolds(BigInteger);
		BigInteger WaveFunction(String^);
		BigInteger GetSignal() { return Cone->Signal; }
		BigInteger GetElement() { return Rod->Element; }
		BigInteger GetBarn() { return Cone->Barn; }
		void Charge(BigInteger);
		void Induce(BigInteger);
		void Torque(BigInteger);
		void Amplify(BigInteger, bool);
		void Sustain(BigInteger, bool);
		void React(BigInteger);
		array<Affinity^>^ Denature();

	};
}
