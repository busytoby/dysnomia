#include "pch.h"

#include "Perception.h"

namespace Dysnomia {
	Perception::Perception() {
		Bridge();
	}

	void Perception::Bridge() {
		S.Wave = Norcamphene.BigDetermine("Norbornylene");
	}

	void Perception::LogOne() {
		int a = 999; // stub
	}
}

