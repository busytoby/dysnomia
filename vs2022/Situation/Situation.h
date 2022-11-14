#pragma once

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;


namespace Dysnomia {
	public ref class Situation
	{
	private:
		Affinity Norcamphene;

	public:
		Orbital S;
		Ion^ I;

		Situation();
		Situation::Situation(const Situation%);

		BigInteger Avail(BigInteger);
		BigInteger Form(BigInteger);
		BigInteger Conjugate(BigInteger);
		void Saturate(BigInteger, BigInteger);
		void Adduct(BigInteger);
		BigInteger Foil(BigInteger, BigInteger);

		void Ln1(array<Byte>^, LinkedList<LinkedList<char>^>^);
		bool Ln2(LinkedList<LinkedList<char>^>^);
	};
}
