#pragma once
#define LEFT 0
#define RIGHT 1

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;

namespace Dysnomia {
	public ref class Situation
	{
	private:
		Affinity Norcamphene;
		int GrowthFactor = 0;

	public:
		Orbital S;
		Orbital N;

		Situation();
		Situation::Situation(const Situation%);

		BigInteger Avail(BigInteger);
		BigInteger Form(BigInteger);
		BigInteger Conjugate(BigInteger);
		void Saturate(BigInteger, BigInteger);
		void Adduct(BigInteger);
		BigInteger Foil(BigInteger, BigInteger);

		LinkedList<LinkedList<char>^>^ Ln1(LinkedList<char>^);
		bool Ln2();
		LinkedListNode<LinkedList<char>^>^ C3PO(LinkedList<char>^, LinkedListNode<char>^, LinkedListNode<LinkedList<char>^>^);
		LinkedListNode<LinkedList<char>^>^ Deprotonate(LinkedListNode<char>^ T, LinkedList<char>^ R, LinkedListNode<char>^ E, LinkedListNode<LinkedList<char>^>^ P);
		int EndAdjacencyCount(LinkedList<char>^, int);
	};
}
