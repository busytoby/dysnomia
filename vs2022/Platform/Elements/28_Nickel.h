#pragma once
#include "17a_Aether.h"
#include "26_Iron.h"
#include "27_Cobalt.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Nickel : public Dai<Iron^, Aether^> {
			public:
				static Dai<Aether^, Iron^>^ Amalthea;

				Int64 Dynamo;
				Int64 Barn;

				Nickel(Aether^ Eta, Iron^ Lambda) {
					Add(Lambda, Eta);
					if(Amalthea == nullptr) Amalthea = gcnew Dai<Aether^, Iron^>();
					Amalthea->Add(Eta, Lambda);

					Barn = Math::ModPow(Lambda->Beta->N->Xi->Ring, Lambda->Beta->R->R->Epsilon, Lambda->Dynamo);
					Dynamo = Barn - Lambda->Mu.Value->Ring;
					if (Int64::IsPositive(Dynamo)) throw gcnew Exception("Too Hot");
				}
			};
		}
	}
}
