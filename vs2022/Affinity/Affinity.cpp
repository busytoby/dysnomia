#include "pch.h"

#include "Affinity.h"

namespace Dysnomia {
	Affinity::Affinity() {
		OpenManifolds();
	}

	void Affinity::ConductorGenerate() {
		BigInteger Hamilton, SeaborgRod, SeaborgCone;

		Hamilton = Math::Random();
		// All 9 Seaborg Types Decay And Are Not Stored
		BigInteger Seaborg_TypeRod = Rod.Avail(Hamilton);
		BigInteger Seaborg_TypeCone = Cone.Avail(Hamilton);

		Rod.Form(Seaborg_TypeCone);
		Cone.Form(Seaborg_TypeRod);

		Rod.Polarize();
		Cone.Polarize();
	}

	void Affinity::OpenManifolds() {
		while (!Cone.ManifoldCompare(Rod)) {
			ConductorGenerate();

			// Bohr Views
			BigInteger aCarrier = Rod.GetCarrier(Cone.Pole);
			BigInteger bCarrier = Cone.GetCarrier(Rod.Pole);
	
			if (aCarrier != bCarrier) continue;

			Cone.Conify();

			Rod.EstablishElement(Cone.Foundation, Cone.Channel);
			Cone.EstablishElement(Rod.Foundation, Rod.Channel);

			if (Rod.Element != Cone.Element) continue;

			Ratchet();

			Rod.Manifest(Cone.Dynamo);
			Cone.Manifest(Rod.Dynamo);

			Rod.Open(aCarrier);
			Cone.Open(bCarrier);
		}
	}

	void Affinity::Ratchet()
	{
		Rod.SyncDynamo();
		Cone.SyncDynamo();
	}
}
