#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Synapse : public Edge<Apse^, Ether^, Dysnomium^>
			{
			public:
				static Edge<Dysnomium^, Apse^, Ether^>^ Despina;
//				Int64 Ring;

				Synapse(Ether^ Beta, Apse^ Rho) : Edge(Rho, Beta, Rho->Mu->I) {
					if (Despina == nullptr) Despina = gcnew Edge<Dysnomium^, Apse^, Ether^>(R, N, I);
					//Ring = Nu->Ring;
				}
			};
		}
	}
}
