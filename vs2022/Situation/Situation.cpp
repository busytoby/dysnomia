#include "pch.h"

#include "Situation.h"
using namespace System::Globalization;


namespace Dysnomia {
	Situation::Situation() {
		S.Boson = gcnew Dynamic();
	}

	BigInteger Situation::Avail(BigInteger Cation) {
		BigInteger Ligand = S.Boson->Avail(Cation);
		return Ligand;
	}

	BigInteger Situation::Form(BigInteger Donor) {
		S.Boson->Form(Donor);
		S.Boson->Polarize();
		return S.Boson->Pole;
	}

	BigInteger Situation::Conjugate(BigInteger% Paradox) {
		S.Coordinate = S.Boson->Coordinate(Paradox);
		S.Boson->Conify();

		return S.Boson->Foundation;
	}

	void Situation::Saturate(BigInteger Foundation, BigInteger Channel) {
		S.Boson->Saturate(Foundation, Channel);
		S.Boson->Bond();
	}

	void Situation::Adduct(BigInteger Dynamo) {
		S.Boson->Adduct(Dynamo);
		S.Boson->Open(S.Coordinate);
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