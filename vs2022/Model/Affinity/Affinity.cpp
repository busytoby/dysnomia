#include "pch.h"

#include "Affinity.h"
using namespace System::Globalization;

namespace Dysnomia {
	Affinity::Affinity() {
		bool Failed = true;
		while (Failed) {
			try {
				Rod = gcnew Dynamic();
				Cone = gcnew Dynamic();
				OpenManifolds();
				Failed = false;
			}
			catch (DynamicException^ E) {
				if (E->Code == 1) continue;
				if (E->Code == 4) continue;
				if (E->Code == 6) continue;
				if (E->Code == 7) continue;
				else throw;
			}
		}
		this->Epsilon = Math::ModPow(Cone->Signal, Rod->Channel, Math::Prime);
	}

	Affinity::Affinity(Dynamic^ Rod, Dynamic^ Cone) {
		try {
			if(!Rod->Barn == 0 || !Cone->Barn == 0) throw gcnew AffinityException(4, "Affinity Already Paired");
			this->Rod = Rod;
			this->Cone = Cone;
			OpenManifolds();
		}
		catch (DynamicException^ E) {
			if (E->Code == 1) throw gcnew AffinityException(1, "Quasar Exception");
			if (E->Code == 4) throw gcnew AffinityException(2, "Magnetar Exception");
			if (E->Code == 7) throw gcnew AffinityException(3, "Neutron Exception");
			if (E->Code != 11) throw;
		}
		this->Epsilon = Math::ModPow(Cone->Signal, Rod->Channel, Math::Prime);
	}

	Affinity::Affinity(Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		Rod = gcnew Dynamic();
		Cone = gcnew Dynamic();
		FuseAndOpen(Rho, Upsilon, Ohm, Xi);
	}

	Affinity::Affinity(Dynamic^ N, Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		Rod = N;
		if (!Rod->Barn == 0) throw gcnew Exception("Rod Already Paired");
		Cone = gcnew Dynamic();
		FuseAndOpen(Rho, Upsilon, Ohm, Xi);
	}

	void Affinity::FuseAndOpen(Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		Cone->Fuse(Rho, Upsilon, Ohm);
		Cone->Tune();
		OpenManifolds(Xi);
		this->Epsilon = Math::ModPow(Cone->Signal, Rod->Channel, Math::Prime);
	}

	void Affinity::OpenManifolds() {
		Xi = Math::ModPow(Cone->Signal, Rod->Channel, Math::Prime);
		OpenManifolds(Xi);
	}

	void Affinity::ConductorGenerate(Int64 Xi) {
		Phi = Rod->Avail(Xi);
		Cone->Tau = Cone->Avail(Xi);
		
		Rod->Form(Cone->Tau);
		Cone->Form(Phi);

		Rod->Polarize();
		Cone->Polarize();
	}

	void Affinity::OpenManifolds(Int64 Xi) {
		ConductorGenerate(Xi);

		Rod->Conjugate(Cone->Pole);
		Cone->Conjugate(Rod->Pole);

		if (Rod->Coordinate != Cone->Coordinate) throw gcnew Exception("Never Failed Pairing Before");

		Cone->Conify();

		Eta = Rod->Saturate(Cone->Foundation, Cone->Channel);
		Mu = Cone->Saturate(Rod->Foundation, Rod->Channel);

		if (Rod->Element != Cone->Element) throw gcnew Exception("Never Failed Pairing Before");

		Ratchet();

		Rod->Adduct(Cone->Dynamo);
		Cone->Adduct(Rod->Dynamo);

		Rod->Open();
		Cone->Open();

		if (!Cone->ManifoldCompare(Rod)) throw gcnew Exception("Never Failed Pairing Before");
		this->Xi = Xi;
	}

	void Affinity::Ratchet()
	{
		Rod->Bond();
		Cone->Bond();
	}

	// Hash Function
	/*
	Int64 Affinity::WaveFunction(String^ Psi)
	{
		array<Byte>^ dataBytes = System::Text::Encoding::UTF8->GetBytes(Psi);
		int blocksize = Cone->Element.ToByteArray()->Length;

		if (blocksize > dataBytes->Length) blocksize = dataBytes->Length;

		ArraySegment<Byte>^ segment = gcnew ArraySegment<Byte>(dataBytes, 0, blocksize);
		array<Byte>^ segmentarray = gcnew array<Byte>(segment->Count);
		Array::Copy(segment->Array, segment->Offset, segmentarray, 0, segment->Count);
		Int64 Hash = Math::ModPow(Cone->Barn, Int64::Parse(Math::ByteArrayToHexString(segmentarray), NumberStyles::AllowHexSpecifier), Rod->Manifold);
		for (int i = blocksize; i < dataBytes->Length; i += blocksize)
		{
			int thisblocksize = (i + blocksize > dataBytes->Length) ? dataBytes->Length - i : blocksize;
			segment = gcnew ArraySegment<Byte>(dataBytes, i, thisblocksize);
			segmentarray = gcnew array<Byte>(segment->Count);
			Array::Copy(segment->Array, segment->Offset, segmentarray, 0, segment->Count);
			Hash = Math::ModPow(Hash, Int64::Parse(Math::ByteArrayToHexString(segmentarray), NumberStyles::AllowHexSpecifier), Rod->Manifold);
		}
		if (Int64::IsNegative(Hash)) Hash = Hash * -1;
		return Hash;
	}
	*/

	/*
	void Affinity::Charge(BigInteger Signal) {
		if (Signal.IsZero) Signal = Rod->Signal;
		Sigma = Cone->Charge(Signal, true);
	}

	void Affinity::Induce(BigInteger Sigma) {
		Rho = Rod->Induce(Sigma, true);
	}

	void Affinity::Torque(BigInteger Sigma) {
		Upsilon = Cone->Torque(Sigma, true);
	}

	void Affinity::Amplify(BigInteger Upsilon, bool Critical) {
		Ohm = Cone->Amplify(Upsilon, Critical);
	}

	void Affinity::Sustain(BigInteger Ohm, bool Critical) {
		Pi = Cone->Sustain(Ohm, Critical);
	}

	void Affinity::React(BigInteger Pi) {
		Rod->React(Pi, Cone->Channel);
		Cone->React(Pi, Rod->Channel);
		if (Cone->Nu != Rod->Eta || Rod->Nu != Cone->Eta) throw gcnew Exception("ReactionException");
		if (Rod->Eta == Rod->Nu) throw gcnew Exception("Gross");
		Omicron = Cone->Nu;
		Omega = Rod->Nu;
	}

	array<Affinity^>^ Affinity::Denature() {
		array<Affinity^>^ D = gcnew array<Affinity^>(2);
		D[0] = gcnew Affinity(Rho, Upsilon, Ohm, Omicron);
		D[1] = gcnew Affinity(Rho, Upsilon, Ohm, Omega);
		return D;
	}
	*/
}
