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
		Secret = Copier.Secret;
		Signal = Copier.Signal;
		Channel = Copier.Channel;
		Pole = Copier.Pole;
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

}