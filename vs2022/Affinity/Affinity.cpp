#include "pch.h"

#include "Affinity.h"
using namespace System::Globalization;

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
		int tries = 0;
		while (!Cone.ManifoldCompare(Rod) && tries++ < 3) {
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
		if (tries >= 2) throw gcnew Exception("Never Caught This Before");
	}

	void Affinity::Ratchet()
	{
		Rod.Bond();
		Cone.Bond();
	}

	BigInteger Affinity::BigDetermine(String^ data)
	{
		//if (DetermineCache.ContainsKey(data)) return DetermineCache[data];

		array<BigInteger>^ Material = Determine(data);

		BigInteger D = BigInteger::ModPow(Material[0], Material[1], Math::Prime);
		//DetermineCache.Add(data, D);
		return D;
	}

	array<BigInteger>^ Affinity::Determine(String^ Roentgen)
	{
		// There's No Such Thing As A Roentgen
		BigInteger Sievert = WaveFunction(Roentgen);

		return Determine(Sievert);
	}

	array<BigInteger>^ Affinity::Determine(BigInteger Sievert)
	{
		BigInteger Ampere = Cone.Charge(Sievert, false);
		BigInteger Henry = Rod.Induce(Ampere, false);
		BigInteger Newton = Cone.Torque(Ampere, false);
		BigInteger Maxwell = Cone.Amplify(Newton, false);
		BigInteger Fermat = Cone.Sustain(Maxwell, false);
		array<BigInteger>^ Material = Rod.React(Fermat, Cone.Channel);
		array<BigInteger>^ ReferenceMaterial = Cone.React(Fermat, Rod.Channel);
		if (Material[0] != ReferenceMaterial[1] || Material[1] != ReferenceMaterial[0]) throw gcnew Exception("ReactionException");
		if (Material[0] == Material[1]) throw gcnew Exception("ReactionExceptionSingularity");
		return Material;
	}

	// Hash Function
	BigInteger Affinity::WaveFunction(String^ Roentgen)
	{
		array<Byte>^ dataBytes = System::Text::Encoding::UTF8->GetBytes(Roentgen);
		int blocksize = Cone.Element.ToByteArray()->Length;

		if (blocksize > dataBytes->Length) blocksize = dataBytes->Length;

		ArraySegment<Byte>^ segment = gcnew ArraySegment<Byte>(dataBytes, 0, blocksize);
		array<Byte>^ segmentarray = gcnew array<Byte>(segment->Count);
		Array::Copy(segment->Array, segment->Offset, segmentarray, 0, segment->Count);
		BigInteger Hash = BigInteger::ModPow(Cone.Barn, BigInteger::Parse(Math::ByteArrayToHexString(segmentarray), NumberStyles::AllowHexSpecifier), Rod.Manifold);
		for (int i = blocksize; i < dataBytes->Length; i += blocksize)
		{
			int thisblocksize = (i + blocksize > dataBytes->Length) ? dataBytes->Length - i : blocksize;
			segment = gcnew ArraySegment<Byte>(dataBytes, i, thisblocksize);
			segmentarray = gcnew array<Byte>(segment->Count);
			Array::Copy(segment->Array, segment->Offset, segmentarray, 0, segment->Count);
			Hash = BigInteger::ModPow(Hash, BigInteger::Parse(Math::ByteArrayToHexString(segmentarray), NumberStyles::AllowHexSpecifier), Rod.Manifold);
		}
		if (BigInteger::IsNegative(Hash)) Hash = Hash * -1;
		return Hash;
	}

}
