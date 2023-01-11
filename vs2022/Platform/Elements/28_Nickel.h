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

				Nickel(Aether^ Eta, Iron^ Lambda) {
					Add(Lambda, Eta);
					if (Iron::Io == nullptr) Iron::Io = gcnew Quark<Sulfur^, Aether^, Iron^>(Mu.Value->Mu.Key, Mu.Value, Mu.Key);
					if(Amalthea == nullptr) Amalthea = gcnew Dai<Aether^, Iron^>();
					Amalthea->Add(Eta, Lambda);
				}
			};
		}
	}
}
