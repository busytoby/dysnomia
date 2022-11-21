#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	Valence^ Orbital::Ring(BigInteger Cation, BigInteger Anion) {
		if (R == nullptr || L == nullptr || N == nullptr) {
			R = gcnew Ion(Boson);
			L = gcnew Ion(Boson, *R);
			N = gcnew Ion(*L->R);
		}

		Valence^ E = R->Nitrate(Anion);
		E->Coordinate = N->R->Coordinate(E->Ring);

		L = N->Push(Cation); // Patent Ring Rung
		L->Ir.Coordinate = N->R->Coordinate(L->Ir.Ring);
		if (!L->Ir.Coordinate.IsZero) throw gcnew Exception("Universe Destroyed By Left Coordination");

		BigInteger Wind = Ligand;
		Ligand = BigInteger::ModPow(E->Barn, Ligand, Math::AzimuthPrime); // Patent Zephyr Is Zero Ligand		

		E->Prime = BigInteger::ModPow(
			BigInteger::Add(
				BigInteger::ModPow(N->Ir.Barn, E->Dynamo, Math::AzimuthPrime),
				BigInteger::ModPow(E->Ring, L->Ir.Dynamo, N->Ir.Prime)
			),
			N->Ir.Element,
			L->Ir.Prime);
		N->Ir.Coordinate = Boson.Coordinate(L->Ir.Ring);
		if (!N->Ir.Coordinate.IsZero) throw gcnew Exception("Left Ringing Should Not Occur Yet");

		R->Ir.Barn = BigInteger::ModPow(
			BigInteger::Add(
				BigInteger::ModPow(E->Dynamo, R->Ir.Dynamo, E->Prime),
				BigInteger::ModPow(E->Ring, E->Dynamo, E->Prime)
			),
			R->Ir.Element,
			E->Prime);
		R->Ir.Coordinate = L->R->Coordinate(N->Ir.Ring);
		if (!N->Ir.Coordinate.IsZero) throw gcnew Exception("Resonance Should Not Occur Yet");

		E->Barn = BigInteger::ModPow(
			BigInteger::Add(
				BigInteger::ModPow(R->Ir.Dynamo, E->Dynamo, Math::Prime),
				BigInteger::ModPow(R->Ir.Ring, R->Ir.Dynamo, Math::Prime)
			),
			E->Element,
			Math::AzimuthPrime);

		Ligand = BigInteger::ModPow(E->Barn, Wind, Math::AzimuthPrime); // Patent Wind

		L->Ir.Barn = N->Ir.Barn % E->Prime;
		R->Ir.Ring = R->Ir.Ring % E->Prime;
		R->Ir.Dynamo = 0;

		return E;
	}

}