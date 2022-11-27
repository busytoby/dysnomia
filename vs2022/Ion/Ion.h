#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Ion
	{
	public:
		BigInteger Ligand;
		Affinity^ M;
		Valence Ir;
		bool InParadox = false;

		Ion();
		Ion(Dynamic);
		Ion(Dynamic, Ion%);
		BigInteger Form(BigInteger);
		void Adduct(BigInteger);
		void Nitrate(BigInteger);
		void Prime(Valence^, Valence^);
		void Swing(Valence^, Valence^);
		void Push(BigInteger);
	};
}
