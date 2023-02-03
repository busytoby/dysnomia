#include "Affinity.h"
#include <iostream>

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
				delete Rod;
				Rod = nullptr;
				delete Cone;
				Cone = nullptr;
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
		Rod->Gamma++;
		Cone->Gamma++;
	}

	Affinity::Affinity(Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		Rod = new Dynamic();
		Cone = new Dynamic();
		FuseAndOpen(Rho, Upsilon, Ohm, Xi);
	}

	Affinity::Affinity(Dynamic* N, Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {	
		Rod = N;
		if (!Rod->Barn == 0) 
			throw 100;

		bool Failed = true;
		while (Failed) {
			try {
				Cone = new Dynamic();
				FuseAndOpen(Rho, Upsilon, Ohm, Xi);
				Failed = false;
			}
			catch (int E) {
				delete Cone;
				Cone = nullptr;
				if (E == 1) continue;
				if (E == 4) continue;
				if (E == 6) continue;
				if (E == 7) continue;
				if (E == 103) continue;
				else throw;
			}
		}
		Rod->Gamma++;
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

		if (Rod->Coordinate != Cone->Coordinate) 
			throw 101;

		Cone->Conify();

		Eta = Rod->Saturate(Cone->Foundation, Cone->Channel);
		Mu = Cone->Saturate(Rod->Foundation, Rod->Channel);

		if (Rod->Element != Cone->Element) 
			throw 102;

		Ratchet();

		Rod->Adduct(Cone->Dynamo);
		Cone->Adduct(Rod->Dynamo);

		Rod->Open();
		Cone->Open();

		if (!Cone->ManifoldCompare(Rod)) 
			throw 103;
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

	void Affinity::Compare(Affinity* B, string A) {
		Compare(B->Rod, A + "->Rod");
		Compare(B->Cone, A + "->Cone");
		Find(B->Phi, A + "->Phi");
		Find(B->Eta, A + "->Eta");
		Find(B->Mu, A + "->Mu");
		Find(B->Xi, A + "->Xi");
	}

	void Affinity::Compare(Dynamic* B, string A) {
		int matches = 0;
		matches += Find(B->Base, A + "->Base");
		matches += Find(B->Secret, A + "->Secret");
		matches += Find(B->Signal, A + "->Signal");
		matches += Find(B->Channel, A + "->Channel");
		matches += Find(B->Identity, A + "->Identity");
		matches += Find(B->Foundation, A + "->Foundation");
		matches += Find(B->Element, A + "->Element");
		matches += Find(B->Dynamo, A + "->Dynamo");
		matches += Find(B->Manifold, A + "->Manifold");
		matches += Find(B->Ring, A + "->Ring");
		matches += Find(B->Barn, A + "->Barn");
		matches += Find(B->Coordinate, A + "->Coordinate");
		matches += Find(B->Tau, A + "->Tau");
		matches += Find(B->Rho, A + "->Rho");
		matches += Find(B->Eta, A + "->Eta");
		matches += Find(B->Beta, A + "->Beta");
		matches += Find(B->Nu, A + "->Nu");
		matches += Find(B->Phi, A + "->Phi");
		if (matches > 8) cout << A + " " + to_string(matches) + "\n";
	}

	int Affinity::Find(Int64 N, string A) {
		if (N == 0) return 0;

		int matches = 0;

		if (Rod->Base == N) matches++;
		if (Rod->Secret == N) matches++;
		if (Rod->Signal == N) matches++;
		if (Rod->Channel == N) matches++;
		if (Rod->Identity == N) matches++;
		if (Rod->Foundation == N) matches++;
		if (Rod->Element == N) matches++;
		if (Rod->Dynamo == N) matches++;
		if (Rod->Manifold == N) matches++;
		if (Rod->Ring == N) matches++;
		if (Rod->Coordinate == N) matches++;
		if (Rod->Tau == N) matches++;
		if (Rod->Eta == N) matches++;
		if (Rod->Rho == N) matches++;
		if (Rod->Beta == N) matches++;
		if (Rod->Phi == N) matches++;

		if (Cone->Base == N) matches++;
		if (Cone->Secret == N) matches++;
		if (Cone->Signal == N) matches++;
		if (Cone->Channel == N) matches++;
		if (Cone->Identity == N) matches++;
		if (Cone->Foundation == N) matches++;
		if (Cone->Element == N) matches++;
		if (Cone->Dynamo == N) matches++;
		if (Cone->Manifold == N) matches++;
		if (Cone->Ring == N) matches++;
		if (Cone->Coordinate == N) matches++;
		if (Cone->Tau == N) matches++;
		if (Cone->Eta == N) matches++;
		if (Cone->Rho == N) matches++;
		if (Cone->Beta == N) matches++;
		if (Cone->Phi == N) matches++;

		if (Phi == N) matches++;
		if (Eta == N) matches++;
		if (Mu == N) matches++;
		if (Xi == N) matches++;

		if (matches > 0) cout << to_string(matches) << " Matches on " << to_string(N) << "\n";

		return matches;
	}
}