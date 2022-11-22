#include "pch.h"

#include "Orbital.h"

namespace Dysnomia {
	Valence^ Orbital::Ring(BigInteger Cation) {
		return Ring(Cation, N->Ir.Barn);
	}

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
		if (!L->Ir.Coordinate.IsZero || !L->Ir.Dynamo.IsZero) throw gcnew Exception("Universe Destroyed By Left Coordination");

		BigInteger Wind = Ligand;
		Ligand = BigInteger::ModPow(E->Barn, Ligand, Math::AzimuthPrime); // Patent Bromonium

		E->Prime = BigInteger::ModPow(
			BigInteger::Add(
				BigInteger::ModPow(N->Ir.Barn, E->Dynamo, Math::AzimuthPrime),
				BigInteger::ModPow(E->Ring, L->Ir.Dynamo, N->Ir.Prime) // Add 0
			),
			N->Ir.Element,
			L->Ir.Prime);
		N->Ir.Coordinate = Boson.Coordinate(L->Ir.Ring);
		if (!N->Ir.Coordinate.IsZero) throw gcnew Exception("Left Ringing Should Not Occur Yet");

		if (R->Ir.Dynamo.IsZero && N->Ir.Dynamo.IsZero) {
			R->Ir.Dynamo = N->Ir.Dynamo = BigInteger::ModPow(N->R->Dynamo, N->Ir.Element, 541);
		}

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

		E->Push();
		Ligand = BigInteger::ModPow(E->Barn, Wind, Math::AzimuthPrime); // Patent Wind
		E->Pull(Ligand);
		Wind = 0;

		L->Ir.Barn = N->Ir.Barn % E->Prime;
		R->Ir.Ring = R->Ir.Ring % E->Prime;
		R->Ir.Dynamo = 0;

		return E;
	}

}