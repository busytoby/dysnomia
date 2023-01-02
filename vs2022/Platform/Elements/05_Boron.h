#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			/*
			public ref class Boron : public Dictionary<Object^, List<BigInteger>^>
			{
			public:
				Boron() : Dictionary<Object^, List<BigInteger>^>() {};

				void Add(Object^ Eta, BigInteger B)
				{
					List<BigInteger>^ Epsilons;
					if (ContainsKey(Eta) && TryGetValue(Eta, Epsilons))
						if(Epsilons->Contains(B)) return;
					if (!ContainsKey(Eta)) {
						Add(Eta, gcnew List<BigInteger>());
						this[Eta]->Add(B);
						return;
					}
					else Epsilons->Add(B);
				}
			};
			*/
		}
	}
}
