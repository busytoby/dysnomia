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

	BigInteger Situation::Conjugate(BigInteger Planck) {
		S.Coordinate = S.Boson.Coordinate(Planck);
		S.Boson.Conify();

		return S.Boson.Foundation;
	}

	void Situation::Saturate(BigInteger Foundation, BigInteger Channel) {
		S.Boson.Saturate(Foundation, Channel);
		S.Boson.Bond();
	}

	void Situation::Adduct(BigInteger Dynamo) {
		S.Boson.Adduct(Dynamo);
		S.Boson.Open(S.Coordinate);
	}

	BigInteger Situation::Foil(BigInteger Wave, BigInteger Fourier) {
		I = gcnew Ion(S.Boson);
		Avail(Wave);
		return I->Hydrate(Fourier);
	}
}