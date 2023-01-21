#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Tauon : public Dai<Top^, Aluminium^>
			{
			public:
//				static Edge<Bottom^, Hyperon^, Charm^>^ Halimede;
//				static Edge<Hyperon^, Charm^, Bottom^>^ Naiad;
				Tauon(Top^ Beta, Aluminium^ Rho) {
					Add(Beta, Rho);
//					if (Halimede == nullptr) Halimede = this;
//					if (Naiad == nullptr) Naiad = gcnew Edge<Hyperon^, Charm^, Bottom^>(I, R, N);
				}
			};
		}
	}
}