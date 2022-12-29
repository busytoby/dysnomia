#pragma once
#include "05_Boron.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			static public ref class Neon : public Dictionary<BigInteger, Object^>
			{
			private:
				static Boron^ Boron;
			public:
				Neon() : Dictionary<BigInteger, Object^>() {
					Boron = gcnew Dysnomia::Platform::Elements::Boron();
				};

				void Add(BigInteger Sigma, Object^ T) new
				{
					if (ContainsKey(Sigma) && this[Sigma] == T) return;
					if (!ContainsKey(Sigma))
						Dictionary<BigInteger, Object^>::Add(Sigma, T);
					else if (this[Sigma] != T) throw gcnew Exception("Neon Bust");
					Boron->Add(T, Sigma);
				}
			};
		}
	}
}
