#include "pch.h"

#include "Perception.h"

namespace Dysnomia {
	Perception::Perception() {
		BigInteger Carbenium = Norbornylene.BigDetermine("Norbornylene");
		BigInteger Carbonium = Norbornylene.BigDetermine("Norcamphene");
		N = gcnew Situation();
		Bridge(N, Carbenium);
		BigInteger Ligand = Norbornylene.BigDetermine("Hello Universe");
		Avail(N, Ligand, Carbonium);
	}

	Perception::Perception(Situation^ V, BigInteger Ligand, BigInteger Carbenium, BigInteger Carbonium) {
		//Bridge(V, Carbenium);
		S.Ligand = Ligand;
		N->S.Ligand = Carbonium;
	}

	Situation Perception::Bridge(Situation^ R, BigInteger Carbenium) {
		S.Ligand = Carbenium;
		BigInteger Ligand = S.Boson.Avail(S.Ligand);
		BigInteger Donor = R->Avail(S.Ligand);
		S.Boson.Form(Donor);
		S.Boson.Polarize();
		BigInteger Substrate = R->Form(Ligand);
		S.Coordinate = S.Boson.Coordinate(Substrate);
		BigInteger Paradox = R->Conjugate(S.Boson.Pole);
		S.Boson.Saturate(Paradox, R->S.Boson.Channel);
		R->Saturate(S.Boson.Foundation, S.Boson.Channel);
		S.Boson.Bond();
		S.Boson.Adduct(R->S.Boson.Dynamo);
		S.Boson.Open(S.Coordinate);
		R->Adduct(S.Boson.Dynamo);

		if (!R->S.Boson.ManifoldCompare(S.Boson)) throw gcnew Exception("Never Failed The Boson Before");
	}

	void Perception::Avail(Situation^ R, BigInteger Ligand, BigInteger Carbonium) { // Proof P=NP
		S.Ligand = Ligand;
		R->S.Ligand = Carbonium;
		BigInteger Aluminum0 = R->Foil(S.Ligand, R->S.Ligand); // Trademark Aluminum
	}
}

