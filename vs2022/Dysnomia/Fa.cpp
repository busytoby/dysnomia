#include "Fa.h"

namespace Dysnomia {
	Fa::Fa() {
		if (Math::POETRY > 1)
			cout << "Fa ";
		Tau = 0;
		Initialize();
		Seed();
		Tune();
	}

	void Fa::Initialize()
	{
		Base = Secret = Signal = Channel = Pole = 0;
		Identity = Foundation = Element = 0;
		Dynamo = 0;
		Manifold = 0;
		Ring = 0;
		Barn = Ring;
		Nu = 0;
	}

	void Fa::Seed()
	{
		Base = Math::Random();
		if (Base < 0) Base = Base * -1;
		Secret = Math::Random();
		Signal = Math::Random();
		if (Signal < 0) Signal = Signal * -1;
	}

	void Fa::Tune()
	{
		Channel = Math::ModPow(Base, Signal, Math::Prime);
		if (Channel < 0) throw 2;
	}

	void Fa::Fuse(Int64 Rho, Int64 Upsilon, Int64 Ohm) {
		Base = Upsilon;
		if (Base < 0) throw 3;
		Secret = Ohm;
		Signal = Rho;
	}

	Int64 Fa::Avail(Int64 Xi)
	{
		return Math::ModPow(Xi, Secret, Math::Prime);
	}

	void Fa::Form(Int64 Chi)
	{
		Base = Math::ModPow(Chi, Secret, Math::Prime);
		if (Base < 0) Base = Base * -1;
		Tune();
	}

	void Fa::Polarize()
	{
		Pole = Math::ModPow(Base, Secret, Math::Prime);
	}

	void Fa::Conjugate(Int64* Chi)
	{
		Coordinate = Math::ModPow(*Chi, Secret, Math::Prime);
		*Chi = 0;
	}

	void Fa::Conify()
	{
		if (!Nu == 0) throw 4;
		Identity = Math::Random();
		if (Identity < 0) Identity = Identity * -1;
		Foundation = Math::ModPow(Base, Identity, Math::Prime);
		if (Foundation < 0) throw 5;
		Nu = 1;
	}

	Int64 Fa::Saturate(Int64 Epsilon, Int64 Theta)
	{
		if (Nu == 0)
		{
			Identity = Math::Random();
			Foundation = Math::ModPow(Base, Identity, Math::Prime);
		}
		else if (Nu != 1) throw 6;

		Beta = Math::ModPow(Epsilon, Identity, Math::Prime);
		Rho = Math::ModPow(Theta, Identity, Math::Prime);
		Eta = Math::ModPow(Epsilon, Signal, Math::Prime);

		Phi = Rho + Eta;
		Element = Beta + Phi;

		// Principal Uncertainty
		//Gamma = Math::ModPow(Theta, Signal, Math::Prime);
		//Kappa = Element + Gamma;

		if (Nu != 0 && Nu != 1) throw 7;

		return Eta;
	}

	void Fa::Bond()
	{
		Dynamo = Math::ModPow(Base, Signal, Element);
		Pole = 0;
	}

	void Fa::Adduct(Int64 Phi)
	{
		Manifold = Math::ModPow(Phi, Signal, Element);
	}

	void Fa::Open()
	{
		Ring = Math::ModPow(Coordinate, Manifold, Element);
		Barn = Math::ModPow(Ring, Manifold, Element);
	}

	bool Fa::ManifoldCompare(Fa* Rod)
	{
		if (Secret == Rod->Secret || Signal == Rod->Signal || Channel == Rod->Channel ||
			!Pole == 0 || !Rod->Pole == 0 || Dynamo == Rod->Dynamo) {
			if (Kappa != 1)
				Seed(); 
			return false;
		}


		if (Manifold == 0 || Ring == 0 || (Manifold != Ring) && Barn == 0)
		{
			if (Kappa != 1)
				Seed(); 
			return false;
		}


		return (Manifold == Rod->Manifold &&
			Ring == Rod->Ring &&
			Barn == Rod->Barn);
	}

	Int64 Fa::Charge(Int64 Psi)
	{
		return Math::ModPow(Barn, Psi, Ring);
	}

	Int64 Fa::Induce(Int64 Sigma)
	{
		return Math::ModPow(Sigma, Manifold, Ring);
	}

	Int64 Fa::Torque(Int64 Sigma)
	{
		return Math::ModPow(Sigma, Element, Channel);
	}

	Int64 Fa::Amplify(Int64 Upsilon)
	{
		return Torque(Upsilon);
	}

	Int64 Fa::Sustain(Int64 Ohm)
	{
		return Torque(Ohm);
	}

	void Fa::React(Int64 Pi, Int64 Theta)
	{
		Eta = Math::ModPow(Pi, Channel, Theta);
		Kappa = Math::ModPow(Pi, Theta, Channel);
		if (Eta == 0 || Kappa == 0) throw 114;
	}
}
