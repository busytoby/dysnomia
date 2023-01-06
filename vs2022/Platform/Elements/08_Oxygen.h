#pragma once

using namespace System;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Oxygen : public Quark<Epsilon^, Hydrogen^, Hydrogen^> {
			private:
				BigInteger _Credit;
				BigInteger _Charge;
			public:
				BigInteger Barn;

				Oxygen(Dysnomia::Epsilon^ N, Affinity^ R) : Quark(N, R->Cone, R->Rod) { 
					if (R->Cone->Barn != R->Rod->Barn) throw gcnew Exception("Sour");
					Barn = R->Rod->Barn;
					_Credit = ((Affinity^)N)->Rod->Foundation;
					_Charge = R->Rod->Dynamo;
					BigInteger _Evidence = BigInteger::ModPow(_Credit, _Charge, Barn);
				};
			};
		}
	}
}
