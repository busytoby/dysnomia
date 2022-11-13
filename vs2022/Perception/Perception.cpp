#include "pch.h"

#include "Perception.h"

namespace Dysnomia {
	Perception::Perception() {
		Bridge(N);
		Avail();
	}

	void Perception::Bridge(Situation R) {
		S.Wave = Norbornylene.BigDetermine("Norbornylene");
		BigInteger Ligand = S.Boson.Avail(S.Wave);
		BigInteger Donor = N.Avail(S.Wave);
		S.Boson.Form(Donor);
		S.Boson.Polarize();
		BigInteger Substrate = N.Form(Ligand);
		S.Coordinate = S.Boson.Coordinate(Substrate);
		BigInteger Paradox = N.Conjugate(S.Boson.Pole);
		S.Boson.Saturate(Paradox, N.S.Boson.Channel);
		N.Saturate(S.Boson.Foundation, S.Boson.Channel);
		S.Boson.Bond();
		S.Boson.Adduct(N.S.Boson.Dynamo);
		S.Boson.Open(S.Coordinate);
		N.Adduct(S.Boson.Dynamo);

		if (!N.S.Boson.ManifoldCompare(S.Boson)) throw gcnew Exception("Never Failed The Boson Before");
	}

	void Perception::Avail() { // Proof P=NP
		S.Wave = Norbornylene.BigDetermine("Hello Universe");
		N.S.Wave = Norbornylene.BigDetermine("Norcamphene");
		BigInteger Aluminum0 = N.Foil(S.Wave, N.S.Wave); // Trademark Aluminum
	}
}

