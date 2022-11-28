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

		BigInteger Sigma, Rho, Upsilon, Ohm, Pi, Omicron, Omega;

		Affinity();
		Affinity::Affinity(BigInteger, BigInteger, BigInteger, BigInteger);
		void OpenManifolds(BigInteger);
		BigInteger WaveFunction(String^ Roentgen);
		BigInteger GetSignal() { return Cone->Signal; }
		BigInteger GetElement() { return Rod->Element; }
		BigInteger GetBarn() { return Cone->Barn; }
		array<Affinity^>^ Denature();

	};
}
