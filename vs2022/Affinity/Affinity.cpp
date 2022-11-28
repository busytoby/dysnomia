#include "pch.h"

#include "Affinity.h"
using namespace System::Globalization;

namespace Dysnomia {
	Affinity::Affinity() {
		Rod = gcnew Dynamic();
		Cone = gcnew Dynamic();
		OpenManifolds();
	}

	Affinity::Affinity(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm, BigInteger Xi) {
		Rod = gcnew Dynamic();
		Cone = gcnew Dynamic();
		Cone->Fuse(Rho, Upsilon, Ohm);
		Cone->Tune();
		OpenManifolds(Xi);
	}

	void Affinity::OpenManifolds() {
		BigInteger Xi = Math::Random();
		OpenManifolds(Xi);
	}

	void Affinity::ConductorGenerate(BigInteger Xi) {
		BigInteger Phi = Rod->Avail(Xi);
		BigInteger Tau = Cone->Avail(Xi);

		Rod->Form(Tau);
		Cone->Form(Phi);

		Rod->Polarize();
		Cone->Polarize();
	}

	void Affinity::OpenManifolds(BigInteger Xi) {
		ConductorGenerate(Xi);

		// Last Relativity
		Rod->Conjugate(Cone->Pole);
		Cone->Conjugate(Rod->Pole);

		if (Rod->Coordinate != Cone->Coordinate) throw gcnew Exception("Never Failed Pairing Before");

		Cone->Conify();

		Rod->Saturate(Cone->Foundation, Cone->Channel);
		Cone->Saturate(Rod->Foundation, Rod->Channel);

		if (Rod->Element != Cone->Element) throw gcnew Exception("Never Failed Pairing Before");

		Ratchet();

		Rod->Adduct(Cone->Dynamo);
		Cone->Adduct(Rod->Dynamo);

		Rod->Open();
		Cone->Open();

		if (!Cone->ManifoldCompare(Rod)) throw gcnew Exception("Never Failed Pairing Before");
	}

	void Affinity::Ratchet()
	{
		Rod->Bond();
		Cone->Bond();
	}

	// Hash Function
	BigInteger Affinity::WaveFunction(String^ Psi)
	{
		array<Byte>^ dataBytes = System::Text::Encoding::UTF8->GetBytes(Psi);
		int blocksize = Cone->Element.ToByteArray()->Length;

		if (blocksize > dataBytes->Length) blocksize = dataBytes->Length;

		ArraySegment<Byte>^ segment = gcnew ArraySegment<Byte>(dataBytes, 0, blocksize);
		array<Byte>^ segmentarray = gcnew array<Byte>(segment->Count);
		Array::Copy(segment->Array, segment->Offset, segmentarray, 0, segment->Count);
		BigInteger Hash = BigInteger::ModPow(Cone->Barn, BigInteger::Parse(Math::ByteArrayToHexString(segmentarray), NumberStyles::AllowHexSpecifier), Rod->Manifold);
		for (int i = blocksize; i < dataBytes->Length; i += blocksize)
		{
			int thisblocksize = (i + blocksize > dataBytes->Length) ? dataBytes->Length - i : blocksize;
			segment = gcnew ArraySegment<Byte>(dataBytes, i, thisblocksize);
			segmentarray = gcnew array<Byte>(segment->Count);
			Array::Copy(segment->Array, segment->Offset, segmentarray, 0, segment->Count);
			Hash = BigInteger::ModPow(Hash, BigInteger::Parse(Math::ByteArrayToHexString(segmentarray), NumberStyles::AllowHexSpecifier), Rod->Manifold);
		}
		if (BigInteger::IsNegative(Hash)) Hash = Hash * -1;
		return Hash;
	}

	array<Affinity^>^ Affinity::Denature() {
		Sigma = Cone->Charge(Rod->Signal, true);
		Rho = Rod->Induce(Sigma, true);
		Upsilon = Cone->Torque(Sigma, true);
		Ohm = Cone->Amplify(Upsilon, true);
		Pi = Cone->Sustain(Ohm, true);
		array<BigInteger>^ Material = Rod->React(Pi, Cone->Channel);
		array<BigInteger>^ ReferenceMaterial = Cone->React(Pi, Rod->Channel);
		if (Material[0] != ReferenceMaterial[1] || Material[1] != ReferenceMaterial[0]) throw gcnew Exception("ReactionException");
		if (Material[0] == Material[1]) throw gcnew Exception("ReactionExceptionSingularity");

		Omicron = Material[0];
		Omega = Material[1];
		array<Affinity^>^ D = gcnew array<Affinity^>(2);
		D[0] = gcnew Affinity(Rho, Upsilon, Ohm, Material[0]);
		D[1] = gcnew Affinity(Rho, Upsilon, Ohm, Material[1]);
		return D;
	}
}
