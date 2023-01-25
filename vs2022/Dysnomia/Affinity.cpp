#include "Affinity.h"

namespace Dysnomia {
	Affinity::Affinity() {
		bool Failed = true;
		while (Failed) {
			try {
				Rod = new Dynamic();
				Cone = new Dynamic();
				OpenManifolds();
				Failed = false;
			}
			catch (int E) {
				if (E == 1) continue;
				if (E == 4) continue;
				if (E == 6) continue;
				if (E == 7) continue;
				else throw;
			}
		}
	}

	Affinity::Affinity(Dynamic* Rod, Dynamic* Cone) {
		try {
			if (!Rod->Barn == 0 || !Cone->Barn == 0) throw 4;
			this->Rod = Rod;
			this->Cone = Cone;
			OpenManifolds();
		}
		catch (int E) {
			if (E == 1) throw 1;
			if (E == 4) throw 2;
			if (E == 7) throw 3;
			if (E != 11) throw;
		}
	}

	Affinity::Affinity(Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		Rod = new Dynamic();
		Cone = new Dynamic();
		FuseAndOpen(Rho, Upsilon, Ohm, Xi);
	}

	Affinity::Affinity(Dynamic* N, Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		Rod = N;
		if (!Rod->Barn == 0) throw 100;
		Cone = new Dynamic();
		FuseAndOpen(Rho, Upsilon, Ohm, Xi);
	}

	void Affinity::FuseAndOpen(Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		Cone->Fuse(Rho, Upsilon, Ohm);
		Cone->Tune();
		OpenManifolds(Xi);
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

		Rod->Conjugate(&Cone->Pole);
		Cone->Conjugate(&Rod->Pole);

		if (Rod->Coordinate != Cone->Coordinate) throw 100;

		Cone->Conify();

		Eta = Rod->Saturate(Cone->Foundation, Cone->Channel);
		Mu = Cone->Saturate(Rod->Foundation, Rod->Channel);

		if (Rod->Element != Cone->Element) throw 100;

		Ratchet();

		Rod->Adduct(Cone->Dynamo);
		Cone->Adduct(Rod->Dynamo);

		Rod->Open();
		Cone->Open();

		if (!Cone->ManifoldCompare(Rod)) throw 100;
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

	void Affinity::Compare(Affinity* B) {
		Compare(B->Rod);
		Compare(B->Cone);
		Find(B->Phi);
		Find(B->Eta);
		Find(B->Mu);
		Find(B->Xi);
	}

	void Affinity::Compare(Dynamic* B) {
		Find(B->Base);
		Find(B->Secret);
		Find(B->Signal);
		Find(B->Channel);
		Find(B->Identity);
		Find(B->Foundation);
		Find(B->Element);
		Find(B->Dynamo);
		Find(B->Manifold);
		Find(B->Ring);
		Find(B->Barn);
		Find(B->Coordinate);
		Find(B->Tau);
		Find(B->Mu);
		Find(B->Rho);
		Find(B->Eta);
		Find(B->Beta);
		Find(B->Nu);
		Find(B->Phi);
	}

	list<string>* Affinity::Find(Int64 N) {
		list<string>* M = new list<string>();
		if (Rod->Base == N) M->push_back("Rod->Base");
		if (Rod->Secret == N) M->push_back("Rod->Secret");
		if (Rod->Signal == N) M->push_back("Rod->Signal");
		if (Rod->Channel == N) M->push_back("Rod->Channel");
		if (Rod->Identity == N) M->push_back("Rod->Identity");
		if (Rod->Foundation == N) M->push_back("Rod->Foundation");
		if (Rod->Element == N) M->push_back("Rod->Element");
		if (Rod->Dynamo == N) M->push_back("Rod->Dynamo");
		if (Rod->Manifold == N) M->push_back("Rod->Manifold");
		if (Rod->Ring == N) M->push_back("Rod->Ring");
		if (Rod->Coordinate == N) M->push_back("Rod->Coordinate");
		if (Rod->Tau == N) M->push_back("Rod->Tau");
		if (Rod->Mu == N) M->push_back("Rod->Mu");
		if (Rod->Eta == N) M->push_back("Rod->Eta");
		if (Rod->Rho == N) M->push_back("Rod->Rho");
		if (Rod->Beta == N) M->push_back("Rod->Beta");
		if (Rod->Phi == N) M->push_back("Rod->Phi");

		if (Cone->Base == N) M->push_back("Cone->Base");
		if (Cone->Secret == N) M->push_back("Cone->Secret");
		if (Cone->Signal == N) M->push_back("Cone->Signal");
		if (Cone->Channel == N) M->push_back("Cone->Channel");
		if (Cone->Identity == N) M->push_back("Cone->Identity");
		if (Cone->Foundation == N) M->push_back("Cone->Foundation");
		if (Cone->Element == N) M->push_back("Cone->Element");
		if (Cone->Dynamo == N) M->push_back("Cone->Dynamo");
		if (Cone->Manifold == N) M->push_back("Cone->Manifold");
		if (Cone->Ring == N) M->push_back("Cone->Ring");
		if (Cone->Coordinate == N) M->push_back("Cone->Coordinate");
		if (Cone->Tau == N) M->push_back("Cone->Tau");
		if (Cone->Mu == N) M->push_back("Cone->Mu");
		if (Cone->Eta == N) M->push_back("Cone->Eta");
		if (Cone->Rho == N) M->push_back("Cone->Rho");
		if (Cone->Beta == N) M->push_back("Cone->Beta");
		if (Cone->Phi == N) M->push_back("Cone->Phi");

		if (Phi == N) M->push_back("Phi");
		if (Eta == N) M->push_back("Eta");
		if (Mu == N) M->push_back("Mu");
		if (Xi == N) M->push_back("Xi");

		// set a breakpoint
		return M;
	}
}