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
		Find(B->Base, A + "->Base");
		Find(B->Secret, A + "->Secret");
		Find(B->Signal, A + "->Signal");
		Find(B->Channel, A + "->Channel");
		Find(B->Identity, A + "->Identity");
		Find(B->Foundation, A + "->Foundation");
		Find(B->Element, A + "->Element");
		Find(B->Dynamo, A + "->Dynamo");
		Find(B->Manifold, A + "->Manifold");
		Find(B->Ring, A + "->Ring");
		Find(B->Barn, A + "->Barn");
		Find(B->Coordinate, A + "->Coordinate");
		Find(B->Tau, A + "->Tau");
		Find(B->Mu, A + "->Mu");
		Find(B->Rho, A + "->Rho");
		Find(B->Eta, A + "->Eta");
		Find(B->Beta, A + "->Beta");
		Find(B->Nu, A + "->Nu");
		Find(B->Phi, A + "->Phi");
	}

	void Affinity::Find(Int64 N, string A) {
		if (N == 0) return;

		if (Rod->Base == N) cout << A + " Rod->Base\n";
		if (Rod->Secret == N) cout << A + " Rod->Secret\n";
		if (Rod->Signal == N) cout << A + " Rod->Signal\n";
		if (Rod->Channel == N) cout << A + " Rod->Channel\n";
		if (Rod->Identity == N) cout << A + " Rod->Identity\n";
		if (Rod->Foundation == N) cout << A + " Rod->Foundation\n";
		if (Rod->Element == N) cout << A + " Rod->Element\n";
		if (Rod->Dynamo == N) cout << A + " Rod->Dynamo\n";
		if (Rod->Manifold == N) cout << A + " Rod->Manifold\n";
		if (Rod->Ring == N) cout << A + " Rod->Ring\n";
		if (Rod->Coordinate == N) cout << A + " Rod->Coordinate\n";
		if (Rod->Tau == N) cout << A + " Rod->Tau\n";
		if (Rod->Mu == N) cout << A + " Rod->Mu\n";
		if (Rod->Eta == N) cout << A + " Rod->Eta\n";
		if (Rod->Rho == N) cout << A + " Rod->Rho\n";
		if (Rod->Beta == N) cout << A + " Rod->Beta\n";
		if (Rod->Phi == N) cout << A + " Rod->Phi\n";

		if (Cone->Base == N) cout << A + " Cone->Base\n";
		if (Cone->Secret == N) cout << A + " Cone->Secret\n";
		if (Cone->Signal == N) cout << A + " Cone->Signal\n";
		if (Cone->Channel == N) cout << A + " Cone->Channel\n";
		if (Cone->Identity == N) cout << A + " Cone->Identity\n";
		if (Cone->Foundation == N) cout << A + " Cone->Foundation\n";
		if (Cone->Element == N) cout << A + " Cone->Element\n";
		if (Cone->Dynamo == N) cout << A + " Cone->Dynamo\n";
		if (Cone->Manifold == N) cout << A + " Cone->Manifold\n";
		if (Cone->Ring == N) cout << A + " Cone->Ring\n";
		if (Cone->Coordinate == N) cout << A + " Cone->Coordinate\n";
		if (Cone->Tau == N) cout << A + " Cone->Tau\n";
		if (Cone->Mu == N) cout << A + " Cone->Mu\n";
		if (Cone->Eta == N) cout << A + " Cone->Eta\n";
		if (Cone->Rho == N) cout << A + " Cone->Rho\n";
		if (Cone->Beta == N) cout << A + " Cone->Beta\n";
		if (Cone->Phi == N) cout << A + " Cone->Phi\n";

		if (Phi == N) cout << A + " Phi\n";
		if (Eta == N) cout << A + " Eta\n";
		if (Mu == N) cout << A + " Mu\n";
		if (Xi == N) cout << A + " Xi\n";
	}
}