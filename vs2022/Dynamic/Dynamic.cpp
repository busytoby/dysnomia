#include "pch.h"

#include "Dynamic.h"

using namespace System;

namespace Dysnomia {
	Dynamic::Dynamic() {
		is_conic = false;
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

	BigInteger Dynamic::Avail(BigInteger Hamilton)
	{
		return BigInteger::ModPow(Hamilton, Secret, Math::Prime);
	}

	void Dynamic::Form(BigInteger Ehrenfest)
	{
		Base = BigInteger::ModPow(Ehrenfest, Secret, Math::Prime);
		Tune();
	}

	void Dynamic::Polarize()
	{
		Pole = BigInteger::ModPow(Base, Secret, Math::Prime);
	}

	BigInteger Dynamic::GetCarrier(BigInteger peerPole)
	{
		return BigInteger::ModPow(peerPole, Secret, Math::Prime);
	}

	void Dynamic::Conify()
	{
		Identity = Math::Random();
		Foundation = BigInteger::ModPow(Base, Identity, Math::Prime);
		is_conic = true;
	}

	void Dynamic::EstablishElement(BigInteger peerFoundation, BigInteger peerChannel)
	{
		if (!is_conic)
		{
			Identity = Math::Random();
			Foundation = BigInteger::ModPow(Base, Identity, Math::Prime);
		}

		BigInteger convergence, moment, authentication, peerMoment, accord, discardMoment;

		convergence = BigInteger::ModPow(peerFoundation, Identity, Math::Prime);
		moment = BigInteger::ModPow(peerChannel, Identity, Math::Prime);
		authentication = BigInteger::ModPow(peerFoundation, Signal, Math::Prime);

		accord = BigInteger::Add(moment, authentication);
		Element = BigInteger::Add(convergence, accord);

		// Principal Uncertainty
		//peerMoment = BigInteger::ModPow(peerChannel, Signal, Math::Prime);
		//discardMoment = BigInteger::Add(Element, peerMoment);
	}

	void Dynamic::SyncDynamo()
	{
		Dynamo = BigInteger::ModPow(Base, Signal, Element);
	}

	void Dynamic::Manifest(BigInteger peerDynamo)
	{
		Manifold = BigInteger::ModPow(peerDynamo, Signal, Element);
	}

	void Dynamic::Open(BigInteger carrier)
	{
		Ring = BigInteger::ModPow(carrier, Manifold, Element);
		Barn = BigInteger::ModPow(Ring, Manifold, Element);
	}

	bool Dynamic::ManifoldCompare(Dynamic Rod)
	{
		if (Secret == Rod.Secret || Signal == Rod.Signal || Channel == Rod.Channel ||
			Pole == Rod.Pole || Dynamo == Rod.Dynamo) {
			Seed(); return false;
		}


		if (Manifold.IsZero || Ring.IsZero || Barn.IsZero)
		{
			Seed(); return false;
		}
		

		return (Manifold == Rod.Manifold &&
			Ring == Rod.Ring &&
			Barn == Rod.Barn);
	}

	BigInteger Dynamic::Charge(BigInteger VoltIdentity, bool Decay)
	{
		BigInteger _barn = BigInteger::ModPow(Barn, VoltIdentity, Ring);
		if (Decay == false) Barn = _barn;
		return _barn;
	}

	BigInteger Dynamic::Induce(BigInteger Ampere, bool Decay)
	{
		BigInteger _ring = BigInteger::ModPow(Ampere, Manifold, Ring);
		if (Decay == false) Ring = _ring;
		return _ring;
	}

	BigInteger Dynamic::Torque(BigInteger Henry, bool Critical)
	{
		BigInteger _channel;
		if (Critical)
			_channel = Manifold;
		else
			_channel = Channel;
		return BigInteger::ModPow(Henry, Element, _channel);
	}

	BigInteger Dynamic::Amplify(BigInteger Newton, bool Critical)
	{
		return Torque(Newton, Critical);
	}

	BigInteger Dynamic::Sustain(BigInteger Maxwell, bool Critical)
	{
		return Torque(Maxwell, Critical);
	}

	array<BigInteger>^ Dynamic::React(BigInteger Fermat, BigInteger peerChannel)
	{
		array<BigInteger>^ Dai = gcnew array<BigInteger>(2);
		Dai[0] = BigInteger::ModPow(Fermat, Channel, peerChannel);
		Dai[1] = BigInteger::ModPow(Fermat, peerChannel, Channel);
		return Dai;
	}
}