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

	BigInteger Situation::Form(BigInteger Donor) {
		S.N->Form(Donor);
		S.N->Polarize();
		return S.N->Pole;
	}

	BigInteger Situation::Conjugate(BigInteger% Paradox) {
		S.Coordinate = S.N->Coordinate(Paradox);
		S.N->Conify();

		return S.N->Foundation;
	}

	void Situation::Saturate(BigInteger Foundation, BigInteger Channel) {
		S.N->Saturate(Foundation, Channel);
		S.N->Bond();
	}

	void Situation::Adduct(BigInteger Dynamo) {
		S.N->Adduct(Dynamo);
		S.N->Open(S.Coordinate);
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