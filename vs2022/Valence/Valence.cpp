#include "pch.h"

#include "Valence.h"

namespace Dysnomia {
	Valence::Valence() {
	}

	Valence::Valence(const Valence% Copier) {
		Foundation = Copier.Foundation;
		Element = Copier.Element;
		Dynamo = Copier.Dynamo;
		Manifold = Copier.Manifold;
		Ring = Copier.Ring;
		Barn = Copier.Barn;
		Coordinate = Copier.Coordinate;
		Prime = Copier.Prime;	
	}
}