#pragma once
#include "Math.h"
#include <iostream>

using namespace std;

namespace Dysnomia {
	class Fa
	{
	private:
		void Initialize();
		void Seed();

	public:
		Int64 Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn, Coordinate;
		Int64 Tau, Eta, Rho, Beta, Phi;
		short Nu;
		int Gamma = 1;

		Fa();
		void Tune();
		void Fuse(Int64, Int64, Int64);
		Int64 Avail(Int64);
		void Form(Int64);
		void Polarize();
		void Conjugate(Int64*);
		void Conify();
		Int64 Saturate(Int64, Int64);
		void Bond();
		void Adduct(Int64);
		void Open();
		bool ManifoldCompare(Fa*);
		/*
		Int64 Charge(Int64, bool);
		Int64 Induce(Int64, bool);
		Int64 Torque(Int64, bool);
		Int64 Amplify(Int64, bool);
		Int64 Sustain(Int64, bool);
		void React(Int64, Int64);
		*/
	};
}
