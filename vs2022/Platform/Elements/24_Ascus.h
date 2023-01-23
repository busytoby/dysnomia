#pragma once

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Ascus : public Dai<Synapse^, Eun^> {
			public:
				static Edge<Synapse^, Pion^, Eun^>^ Sycorax;
				static Dai<Dysnomium^, Synapse^>^ Belinda;
				static Edge<Eun^, Sulfur^, Synapse^>^ Puck;
				static Ascus^ Mars;

				Ascus(Synapse^ Beta, Eun^ Iota) {
					Add(Beta, Iota);

					if (Mars == nullptr) Mars = this;
					if (Puck == nullptr) Puck = gcnew Edge<Eun^, Sulfur^, Synapse^>(Iota, Iota[0]->I[0]->I->N, Beta);
					if (Belinda == nullptr) Belinda = gcnew Dai<Dysnomium^, Synapse^>();
					Belinda->Add(Beta->R, Beta);
					if (Sycorax == nullptr) Sycorax = gcnew Edge<Synapse^, Pion^, Eun^>(Beta, Beta->I[0]->L, Iota);
				}
			};
		}
	}
}