#include "pch.h"

#include "Perception.h"

namespace Dysnomia {
	Perception::Perception() {
		Bridge(N);
		Avail();
	}

	void Perception::Bridge(Situation R) {
		S.Wave = Norbornylene.BigDetermine("Norbornylene");
		BigInteger Ehrenfest = S.Boson.Avail(S.Wave);
		BigInteger Hilbert = N.Avail(S.Wave);
		S.Boson.Form(Hilbert);
		S.Boson.Polarize();
		BigInteger ConePole = N.Form(Ehrenfest);
		S.DiracCarrier = S.Boson.GetCarrier(ConePole);
		BigInteger NFoundation = N.LockPole(S.Boson.Pole);
		S.Boson.EstablishElement(NFoundation, N.S.Boson.Channel);
		N.EstablishElement(S.Boson.Foundation, S.Boson.Channel);
		S.Boson.SyncDynamo();
		S.Boson.Manifest(N.S.Boson.Dynamo);
		S.Boson.Open(S.DiracCarrier);
		N.Manifest(S.Boson.Dynamo);

		if (!N.S.Boson.ManifoldCompare(S.Boson)) throw gcnew Exception("Never Failed The Boson Before");
	}

	void Perception::Avail() { // Proof P=NP
		S.Wave = Norbornylene.BigDetermine("Hello Universe");
		N.S.Wave = Norbornylene.BigDetermine("Norcamphene");
		BigInteger Aluminum0 = N.Foil(S.Wave, N.S.Wave); // IS ALUMINUM
	}
}

