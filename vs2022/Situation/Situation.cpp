#include "pch.h"

#include "Situation.h"
using namespace System::Globalization;


namespace Dysnomia {
	Situation::Situation() {
		S.N = gcnew Dynamic();
	}

	BigInteger Situation::Avail(BigInteger Cation) {
		BigInteger Ligand = S.N->Avail(Cation);
		return Ligand;
	}

	BigInteger Situation::Foil(BigInteger Carbenium, BigInteger Carbonium) {
 		S.Ring(Carbonium, Carbenium);

		S.Push();

		//Pull();
		/*
		S.R->Ir.R->Clear();
		S.R->Ir.H->Clear();

		// Ln2 Sulfide Passes Indefinitely As F(U)
		while (Ln2()) {
			GrowthFactor = 0;
		}

		throw gcnew Exception("Escaped Infinite Loop, The Universe Was Destroyed");
		*/
		return 0;
	}
}