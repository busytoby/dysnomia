#include "pch.h"

#include "Situation.h"

namespace Dysnomia {
	Situation::Situation() {

	}

	Situation::Situation(const Situation% Copier) {

	}

	BigInteger Situation::Avail(BigInteger Wave) {
		BigInteger Ehrenfest = S.Boson.Avail(Wave);
		return Ehrenfest;
	}

	BigInteger Situation::Form(BigInteger Hilbert) {
		S.Boson.Form(Hilbert);
		S.Boson.Polarize();
		return S.Boson.Pole;
	}

	BigInteger Situation::LockPole(BigInteger Planck) {
		S.DiracCarrier = S.Boson.GetCarrier(Planck);
		S.Boson.Conify();

		return S.Boson.Foundation;
	}

	void Situation::EstablishElement(BigInteger Foundation, BigInteger Channel) {
		S.Boson.EstablishElement(Foundation, Channel);
		S.Boson.SyncDynamo();
	}

	void Situation::Manifest(BigInteger Dynamo) {
		S.Boson.Manifest(Dynamo);
		S.Boson.Open(S.DiracCarrier);
	}

}