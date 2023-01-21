#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Tauon : public Dai<Top^, Aluminium^>
			{
			public:
				static Edge<Bottom^, Hyperon^, Charm^>^ Halimede;
				static Edge<Hyperon^, Charm^, Bottom^>^ Naiad;
				Tauon(Aluminium^ Beta) {
					Top^ Rho = gcnew Top(Beta[0]->I);
					Add(Rho, Beta);
					Add(Bottom::VanAllenBelt->R[0]->L, Beta);
					
					if (Halimede == nullptr) Halimede = gcnew Edge<Bottom^, Hyperon^, Charm^>(Beta[0]->L, Strange::CygnusLoop[3][0]->L, Beta[0]->I);
					if (Naiad == nullptr) Naiad = gcnew Edge<Hyperon^, Charm^, Bottom^>(Strange::CygnusLoop[3][0]->L, Beta[0]->L[0]->L, Beta[0]->L);
				}
			};
		}
	}
}