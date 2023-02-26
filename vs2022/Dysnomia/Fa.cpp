#include "Fa.h"

namespace Dysnomia {
	Fa::Fa() {
		Tau = 0;
		Initialize();
		Seed();
		Tune();
	}

	Fa::Fa(const Fa& Copier) {
		Base = Copier.Base;
		if (Base < 0) throw 1;
		Secret = Copier.Secret;
		Signal = Copier.Signal;
		Channel = Copier.Channel;
		Pole = Copier.Pole;
		Identity = Copier.Identity;
		Foundation = Copier.Foundation;
		Element = Copier.Element;
		Dynamo = Copier.Dynamo;
		Manifold = Copier.Manifold;
		Ring = Copier.Ring;
		Barn = Copier.Barn;
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
			Seed(); return false;
		}


		if (Manifold == 0 || Ring == 0 || (Manifold != Ring) && Barn == 0)
		{
			Seed(); return false;
		}


		return (Manifold == Rod->Manifold &&
			Ring == Rod->Ring &&
			Barn == Rod->Barn);
	}

	/*
	Int64 Fa::Charge(Int64 Psi, bool Decay)
	{
		Int64 _barn = Math::ModPow(Barn, Psi, Ring);
		if (Decay == false) Barn = _barn;
		return _barn;
	}

	Int64 Fa::Induce(Int64 Sigma, bool Decay)
	{
		Int64 _ring = Math::ModPow(Sigma, Manifold, Ring);
		if (Decay == false) Ring = _ring;
		return _ring;
	}

	Int64 Fa::Torque(Int64 Sigma, bool Critical)
	{
		Int64 _channel;
		if (Critical)
			_channel = Manifold;
		else
			_channel = Channel;
		return Math::ModPow(Sigma, Element, _channel);
	}

	Int64 Fa::Amplify(Int64 Upsilon, bool Critical)
	{
		return Torque(Upsilon, Critical);
	}

	Int64 Fa::Sustain(Int64 Ohm, bool Critical)
	{
		return Torque(Ohm, Critical);
	}

	void Fa::React(Int64 Pi, Int64 Theta)
	{
		Eta = Math::ModPow(Pi, Channel, Theta);
		Nu = Math::ModPow(Pi, Theta, Channel);
	}
	*/
}
