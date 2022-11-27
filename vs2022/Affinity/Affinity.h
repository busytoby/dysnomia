#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	public ref class Affinity
	{
	private:
		Dynamic^ Rod;
		void ConductorGenerate();
		void OpenManifolds();
		void Ratchet();

	public:
		Dynamic^ Cone;

		Affinity();
		BigInteger BigDetermine(String^ data);
		array<BigInteger>^ Determine(String^ Roentgen);
		array<BigInteger>^ Determine(BigInteger Sievert);
		BigInteger WaveFunction(String^ Roentgen);
		BigInteger GetSignal() { return Cone->Signal; }
		BigInteger GetElement() { return Rod->Element; }
		BigInteger GetBarn() { return Cone->Barn; }

	};
}
