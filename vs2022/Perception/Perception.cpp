#include "pch.h"

#include "Perception.h"

namespace Dysnomia {
	Perception::Perception() {
		BigInteger Carbenium = Norbornylene.GetElement();
		BigInteger Carbonium = Norbornylene.GetBarn();;

		S.N = gcnew Dynamic();
		N = gcnew Situation();
		Bridge(N, Carbenium);

		BigInteger Ligand = Norbornylene.GetSignal();;
		S.Ligand = Ligand;
		N->S.Ligand = Carbonium;
		Avail(N, Ligand, Carbonium);
	}

	// uncalled stub
	Perception::Perception(Situation^ V, BigInteger Ligand, BigInteger Carbenium, BigInteger Carbonium) {
		Bridge(V, Carbenium);
		S.Ligand = Ligand;
		V->S.Ligand = Carbonium;
	}

	Situation^ Perception::Bridge(Situation^ R, BigInteger Carbenium) {
		S.Ligand = Carbenium;
		BigInteger Ligand = S.N->Avail(S.Ligand);
		BigInteger Donor = R->Avail(S.Ligand);
		S.N->Form(Donor);
		S.N->Polarize();
		BigInteger Substrate = R->Form(Ligand);
		S.Coordinate = S.N->Coordinate(Substrate);
		BigInteger Paradox = R->Conjugate(S.N->Pole);
		S.N->Saturate(Paradox, R->S.N->Channel);
		R->Saturate(S.N->Foundation, S.N->Channel);
		S.N->Bond();
		S.N->Adduct(R->S.N->Dynamo);
		S.N->Open(S.Coordinate);
		R->Adduct(S.N->Dynamo);

		if (!R->S.N->ManifoldCompare(*S.N)) throw gcnew Exception("Never Failed The Boson Before");

		return R;
	}

	void Perception::Avail(Situation^ R, BigInteger Ligand, BigInteger Carbonium) { // Proof P=NP
		S.Ligand = Ligand;
		R->S.Ligand = Carbonium;
		BigInteger Aluminum0 = R->Foil(S.Ligand, R->S.Ligand); // Trademark Aluminum
	}
}

