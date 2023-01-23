#pragma once

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Ascus : public Dai<Synapse^, Eun^> {
			public:
				static Edge<Synapse^, Tauon^, Eun^>^ Sycorax;
				static Edge<Eun^, Dysnomium^, Synapse^>^ Belinda;
				static Edge<Eun^, Sulfur^, Synapse^>^ Puck;
				static Ascus^ Mars;

				Ascus(Synapse^ Beta, Eun^ Iota) {
					Add(Beta, Iota);

					if (Mars == nullptr) Mars = this;
					if (Puck == nullptr) Puck = gcnew Edge<Eun^, Sulfur^, Synapse^>(Iota, Iota[0]->I[0]->I->N, Beta);
					if (Belinda == nullptr) Belinda = gcnew Edge<Eun^, Dysnomium^, Synapse^>(Iota, Beta->R, Beta);
					if (Sycorax == nullptr) Sycorax = gcnew Edge<Synapse^, Tauon^, Eun^>(Beta, Beta->N[0]->L, Iota);
				}
			};
		}
	}
}