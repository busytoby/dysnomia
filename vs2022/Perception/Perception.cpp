#include "pch.h"

#include "Perception.h"

namespace Dysnomia {
	Perception::Perception() {
		BigInteger Carbenium = Norbornylene.GetElement();
		BigInteger Carbonium = Norbornylene.GetBarn();;

		S.N = gcnew Dynamic();
		N = gcnew Ion();
		Bridge(N, Carbenium);

		BigInteger Ligand = Norbornylene.GetSignal();;
		S.Ligand = Ligand;
		N->Ligand = Carbonium;
		Avail(N, Ligand, Carbonium);
	}

	// uncalled stub
	Perception::Perception(Ion^ V, BigInteger Ligand, BigInteger Carbenium, BigInteger Carbonium) {
		Bridge(V, Carbenium);
		S.Ligand = Ligand;
		V->Ligand = Carbonium;
	}

	void Perception::Bridge(Ion^ R, BigInteger Carbenium) {
		S.Ligand = Carbenium;
		BigInteger Ligand = S.N->Avail(S.Ligand);
		BigInteger Donor = R->M->Cone->Avail(S.Ligand);
		S.N->Form(Donor);
		S.N->Polarize();
		BigInteger Substrate = R->Form(Ligand);
		S.N->Conjugate(Substrate);
		Orbital^ E = gcnew Orbital(R);
		BigInteger Paradox = E->Conjugate(S.N->Pole);
		S.N->Saturate(Paradox, E->Y->M->Cone->Channel);
		E->Saturate(S.N->Foundation, S.N->Channel);
		S.N->Bond();
		S.N->Adduct(E->Y->M->Cone->Dynamo);
		S.N->Open();
		E->Y->Adduct(S.N->Dynamo);

		if (!R->M->Cone->ManifoldCompare(S.N)) throw gcnew Exception("Never Failed The Boson Before");
	}

	void Perception::Avail(Ion^ R, BigInteger Ligand, BigInteger Carbonium) { // Proof P=NP
		S.Ligand = Ligand;
		R->Ligand = Carbonium;
//		BigInteger Aluminum0 = R->Foil(S.Ligand, R->Ligand); // Trademark Aluminum
	}
}

