#include "Faung.h"

namespace Dysnomia {
	Faung::Faung() {
		if (Math::POETRY > 9)
			wcout << L"Faung ";
		bool Failed = true;
		while (Failed) {
			try {
				Rod = new Fa();
				Cone = new Fa();
				OpenManifolds();
				Failed = false;
			}
			catch (int E) {
				delete Rod;
				delete Cone;
				continue;
			}
		}
	}

	Faung::Faung(Fa* Rod, Fa* Cone) { new (this) Faung(Rod, Cone, true); }

	Faung::Faung(Fa* Rod, Fa* Cone, bool Refaung) {
		if (Math::POETRY > 9)
			wcout << L"Faung ";
		if (Refaung && (!Rod->Barn == 0 || !Cone->Barn == 0))
			throw 4;
		this->Rod = Rod;
		this->Cone = Cone;
		this->Cone->Kappa = -1;

		bool Failed = true;
		while (Failed) {
			try {
				OpenManifolds();
				Failed = false;
			}
			catch (int E) {
				this->Cone->Nu = 0;
				if (E == 1) throw E;
				if (E == 4) throw E;
				if (E == 7) throw E;
				throw E;
			}
		}
		Rod->Gamma++;
		Cone->Gamma++;
	}

	Faung::Faung(Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		if (Math::POETRY > 9)
			wcout << L"Faung ";

		bool Failed = true;
		while (Failed) {
			try {
				Rod = new Fa();
				Cone = new Fa();
				FuseAndOpen(Rho, Upsilon, Ohm, Xi);
				Failed = false;
			}
			catch (int E) {
				delete Rod;
				delete Cone;
				throw E;
			}
		}
	}

	Faung::Faung(Fa* Beta, Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		if (Math::POETRY > 9)
			wcout << L"Faung ";
		Rod = Beta;
		if (!Rod->Barn == 0) 
			throw 100;

		bool Failed = true;
		while (Failed) {
			try {
				Cone = new Fa();
				Cone->Kappa = -1;
				if (Rho == Ohm) Rho = Math::Random();
				FuseAndOpen(Rho, Upsilon, Ohm, Xi);
				Failed = false;
			}
			catch (int E) {
				delete Cone;
				if (E == 1) continue;
				if (E == 4) continue;
				if (E == 6) continue;
				if (E == 7) continue;
				throw E;
			}
		}
		Rod->Gamma++;
	}

	void Faung::FuseAndOpen(Int64 Rho, Int64 Upsilon, Int64 Ohm, Int64 Xi) {
		Cone->Fuse(Rho, Upsilon, Ohm);
		Cone->Tune();
		OpenManifolds(Xi);
	}

	void Faung::OpenManifolds() {
		Xi = Math::ModPow(Cone->Signal, Rod->Channel, Math::Prime);
		OpenManifolds(Xi);
	}

	void Faung::ConductorGenerate(Int64 Xi) {
		Phi = Rod->Avail(Xi);
		Cone->Tau = Cone->Avail(Xi);

		Rod->Form(Cone->Tau);
		Cone->Form(Phi);

		Rod->Polarize();
		Cone->Polarize();
	}

	void Faung::OpenManifolds(Int64 Xi) {
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
		Chi = 0;
	}

	void Faung::Ratchet()
	{
		Rod->Bond();
		Cone->Bond();
	}

	// Hash Function
	/*
	Int64 Faung::WaveFunction(String^ Psi)
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

	void Faung::Theta() {
		Theta(Pi > 0 ? Pi : Rod->Signal);
	}

	void Faung::Lambda() {
		if (Chi != 3) throw 204;
		Int64 Upsilon = Cone->Torque(Rod->Eta);
		Int64 Ohm = Cone->Amplify(Upsilon);
		Int64 Pi = Cone->Sustain(Ohm);
		Cone->React(Pi, Cone->Dynamo);
		Rod->React(Pi, Rod->Dynamo);
		Chi = 4;
	}

	void Faung::Iota() {
		if (Chi != 2) throw 203;
		Int64 Upsilon = Cone->Torque(Rod->Kappa);
		Int64 Ohm = Cone->Amplify(Upsilon);
		Int64 Pi = Cone->Sustain(Ohm);
		Rod->React(Pi, Rod->Channel);
		Cone->React(Pi, Cone->Channel);
		Chi = 3;
	}

	void Faung::Beta(Int64 Iota) {
		if (Iota == 0) throw 200;
		if (Chi != 1) throw 202;
		Int64 Upsilon = Rod->Torque(Iota);
		Int64 Ohm = Rod->Amplify(Upsilon);
		Int64 Pi = Rod->Sustain(Ohm);
		Rod->React(Pi, Cone->Dynamo);
		Cone->React(Pi, Rod->Dynamo);
		Chi = 2;
	}

	void Faung::Theta(Int64 Omicron) {
		if (Omicron == 0) throw 200;
		if (Chi != 0) throw 201;
		bool Failed = true;
		while (Failed) {
			try {
				Charge(Omicron);
				if (Sigma < 4)
					throw 115;
				Induce();
				Torque();
				Amplify();
				Sustain();
				React();
				Failed = false;
				Chi = 1;
			}
			catch (int E) {
				throw E;
				/*
				if (Cone->Kappa == 1 || Rod->Kappa == 1)
					Omicron = Phi;
				if (Cone->Eta == 1 || Rod->Eta == 1)
					Omicron = Eta;
				continue;
				*/
			}
		}
	}

	void Faung::Charge(Int64 Signal) {
		if (Signal == 0) throw 200;
		Sigma = Cone->Charge(Signal);
	}

	void Faung::Induce() {
		Rho = Rod->Induce(Sigma);
	}

	void Faung::Torque() {
		Upsilon = Cone->Torque(Rho);
	}

	void Faung::Amplify() {
		Ohm = Cone->Amplify(Upsilon);
	}

	void Faung::Sustain() {
		Pi = Cone->Sustain(Ohm);
	}

	void Faung::React() {
		Rod->React(Pi, Cone->Channel);
		Cone->React(Pi, Rod->Channel);
		if (Cone->Kappa != Rod->Eta || Rod->Kappa != Cone->Eta) 
			throw 100;
		if (Rod->Eta == Rod->Kappa) 
			throw 101;
		if (Cone->Kappa <= 1 && Rod->Kappa <= 1) 
			throw 666;
		Omicron = Cone->Kappa;
		Omega = Rod->Kappa;
	}

	/*
	pair<Faung>* Faung::Denature() {
		array<Faung^>^ D = new array<Faung^>(2);
		D[0] = gcnew Faung(Rho, Upsilon, Ohm, Omicron);
		D[1] = gcnew Faung(Rho, Upsilon, Ohm, Omega);
		return D;
	}
	*/

	void Faung::Compare(Faung* B, string A) {
		Compare(B->Rod, A + "->Rod");
		Compare(B->Cone, A + "->Cone");
		Find(B->Phi, A + "->Phi");
		Find(B->Eta, A + "->Eta");
		Find(B->Mu, A + "->Mu");
		Find(B->Xi, A + "->Xi");
	}

	void Faung::Compare(Fa* B, string A) {
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

	int Faung::Find(Int64 N, string A) {
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