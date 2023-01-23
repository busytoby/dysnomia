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
				static Edge<Synapse^, Sulfur^, Eun^>^ Mars;

				Ascus(Synapse^ Beta, Eun^ Rho) {
					Add(Beta, Rho);

					/*
					if (Mars == nullptr) Mars = gcnew Edge<Synapse^, Sulfur^, Eun^>(Beta, Alpha->Mu.Key, Rho);
					if (Puck == nullptr) Puck = gcnew Edge<Eun^, Sulfur^, Synapse^>(Rho, Alpha->Mu.Key, Beta);
					if (Belinda == nullptr) Belinda = gcnew Edge<Eun^, Dysnomium^, Synapse^>(Rho, Alpha->Xi->L, Beta);
					if (Sycorax == nullptr) Sycorax = gcnew Edge<Synapse^, Tauon^, Eun^>(Beta, Alpha->Mu.Value->Mu.Value, Rho);
					*/
				}
			};
		}
	}
}