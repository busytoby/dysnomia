#include "pch.h"

#include "Affinity.h"
using namespace System::Globalization;

namespace Dysnomia {
	Affinity::Affinity() {
		Rod = gcnew Dynamic();
		Cone = gcnew Dynamic();
		OpenManifolds();
	}

	Affinity::Affinity(BigInteger Signal, BigInteger Base, BigInteger Secret, BigInteger Square) {
		Rod = gcnew Dynamic();
		Cone = gcnew Dynamic();
		Cone->Initialize(Signal, Base, Secret);
		Cone->Tune();
		OpenManifolds(Square);
	}

	void Affinity::OpenManifolds() {
		BigInteger Hamilton = Math::Random();
		OpenManifolds(Hamilton);
	}

	void Affinity::ConductorGenerate(BigInteger Hamilton) {
		BigInteger SeaborgRod, SeaborgCone;

		BigInteger RodSubstrate = Rod->Avail(Hamilton);
		BigInteger ConeSubstrate = Cone->Avail(Hamilton);

		Rod->Form(ConeSubstrate);
		Cone->Form(RodSubstrate);

		Rod->Polarize();
		Cone->Polarize();
	}

	void Affinity::OpenManifolds(BigInteger Hamilton) {

		ConductorGenerate(Hamilton);

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
	BigInteger Affinity::WaveFunction(String^ Roentgen)
	{
		array<Byte>^ dataBytes = System::Text::Encoding::UTF8->GetBytes(Roentgen);
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
		Sigma = Cone->Charge(Rod->Signal, false);
		Rho = Rod->Induce(Sigma, false);
		Upsilon = Cone->Torque(Sigma, false);
		Ohm = Cone->Amplify(Upsilon, false);
		Pi = Cone->Sustain(Ohm, false);
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
