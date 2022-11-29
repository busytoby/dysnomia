#include "pch.h"

#include "Dynamic.h"

using namespace System;

namespace Dysnomia {
	Dynamic::Dynamic() {
		Tau = 0;
		Initialize();
		Seed();
		Tune();
	}

	Dynamic::Dynamic(const Dynamic% Copier) {
		Base = Copier.Base;
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


	void Dynamic::Initialize()
	{
		Base = Secret = Signal = Channel = Pole = 0;
		Identity = Foundation = Element = 0;
		Dynamo = 0;
		Manifold = 0;
		Ring = 0;
		Barn = Ring;
	}

	void Dynamic::Seed()
	{
		Base = Math::Random();
		Secret = Math::Random();
		Signal = Math::Random();
	}

	void Dynamic::Tune()
	{
		Channel = BigInteger::ModPow(Base, Signal, Math::Prime);
	}

	void Dynamic::Fuse(BigInteger Rho, BigInteger Upsilon, BigInteger Ohm) {
		Base = Upsilon;
		Secret = Ohm;
		Signal = Rho;
	}

	BigInteger Dynamic::Avail(BigInteger Xi)
	{
		return BigInteger::ModPow(Xi, Secret, Math::Prime);
	}

	void Dynamic::Form(BigInteger Nu)
	{
		Base = BigInteger::ModPow(Nu, Secret, Math::Prime);
		Tune();
	}

	void Dynamic::Polarize()
	{
		Pole = BigInteger::ModPow(Base, Secret, Math::Prime);
	}

	void Dynamic::Conjugate(BigInteger% Nu)
	{
		Coordinate = BigInteger::ModPow(Nu, Secret, Math::Prime);
		Nu = 0;
	}

	void Dynamic::Conify()
	{
		Identity = Math::Random();
		Foundation = BigInteger::ModPow(Base, Identity, Math::Prime);
		Tau = 1;
	}

	BigInteger Dynamic::Saturate(BigInteger Epsilon, BigInteger Theta)
	{
		if (Tau.IsZero)
		{
			Identity = Math::Random();
			Foundation = BigInteger::ModPow(Base, Identity, Math::Prime);
		}

		// BigInteger Gamma, Kappa
		BigInteger Beta, Rho, Eta, Phi;

		Beta = BigInteger::ModPow(Epsilon, Identity, Math::Prime);
		Rho = BigInteger::ModPow(Theta, Identity, Math::Prime);
		Eta = BigInteger::ModPow(Epsilon, Signal, Math::Prime);

		Phi = BigInteger::Add(Rho, Eta);
		Element = BigInteger::Add(Beta, Phi);

		// Principal Uncertainty
		//Gamma = BigInteger::ModPow(Theta, Signal, Math::Prime);
		//Kappa = BigInteger::Add(Element, Gamma);

		if (Tau.IsZero)
			Mu = Beta;
		else
			Mu = Rho;

		return Eta;
	}

	void Dynamic::Bond()
	{
		Dynamo = BigInteger::ModPow(Base, Signal, Element);
		Pole = 0;
	}

	void Dynamic::Adduct(BigInteger Phi)
	{
		Manifold = BigInteger::ModPow(Phi, Signal, Element);
	}

	void Dynamic::Open()
	{
		Ring = BigInteger::ModPow(Coordinate, Manifold, Element);
		Barn = BigInteger::ModPow(Ring, Manifold, Element);
	}

	bool Dynamic::ManifoldCompare(Dynamic^ Rod)
	{
		if (Secret == Rod->Secret || Signal == Rod->Signal || Channel == Rod->Channel ||
			!Pole.IsZero || !Rod->Pole.IsZero || Dynamo == Rod->Dynamo) {
			Seed(); return false;
		}


		if (Manifold.IsZero || Ring.IsZero || Barn.IsZero)
		{
			Seed(); return false;
		}
		

		return (Manifold == Rod->Manifold &&
			Ring == Rod->Ring &&
			Barn == Rod->Barn);
	}

	BigInteger Dynamic::Charge(BigInteger Psi, bool Decay)
	{
		BigInteger _barn = BigInteger::ModPow(Barn, Psi, Ring);
		if (Decay == false) Barn = _barn;
		return _barn;
	}

	BigInteger Dynamic::Induce(BigInteger Sigma, bool Decay)
	{
		BigInteger _ring = BigInteger::ModPow(Sigma, Manifold, Ring);
		if (Decay == false) Ring = _ring;
		return _ring;
	}

	BigInteger Dynamic::Torque(BigInteger Sigma, bool Critical)
	{
		BigInteger _channel;
		if (Critical)
			_channel = Manifold;
		else
			_channel = Channel;
		return BigInteger::ModPow(Sigma, Element, _channel);
	}

	BigInteger Dynamic::Amplify(BigInteger Upsilon, bool Critical)
	{
		return Torque(Upsilon, Critical);
	}

	BigInteger Dynamic::Sustain(BigInteger Ohm, bool Critical)
	{
		return Torque(Ohm, Critical);
	}

	array<BigInteger>^ Dynamic::React(BigInteger Pi, BigInteger Theta)
	{
		array<BigInteger>^ Dai = gcnew array<BigInteger>(2);
		Dai[0] = BigInteger::ModPow(Pi, Channel, Theta);
		Dai[1] = BigInteger::ModPow(Pi, Theta, Channel);
		return Dai;
	}
}