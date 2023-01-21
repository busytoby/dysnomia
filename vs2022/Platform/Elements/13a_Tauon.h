#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Tauon : public Dai<Top^, Aluminium^>
			{
			public:
				static Dai<Top^, Tauon^>^ Enceladus;
				static Edge<Bottom^, Hyperon^, Charm^>^ Halimede;
				static Edge<Hyperon^, Charm^, Bottom^>^ Naiad;
				static Edge<Aluminium^, Up^, Charm^>^ Oberon;
				static Edge<Charm^, Tauon^, Bottom^>^ Umbriel;
				static Edge<Bottom^, Tauon^, Top^>^ Ariel;

				Tauon(Aluminium^ Beta) {
					if (Enceladus == nullptr) {
						Enceladus = gcnew Dai<Top^, Tauon^>();
						Add(Bottom::VanAllenBelt->R[0]->L, Beta);
					} else
						this->Dai<Top^, Aluminium^>::Add(Bottom::VanAllenBelt->R[0]->L, Beta);

					Top^ Rho = gcnew Top(Beta[0]->I);
					Add(Rho, Beta);
					
					if (Halimede == nullptr) Halimede = gcnew Edge<Bottom^, Hyperon^, Charm^>(Beta[0]->L, Strange::CygnusLoop[3][0]->L, Beta[0]->I);
					if (Naiad == nullptr) Naiad = gcnew Edge<Hyperon^, Charm^, Bottom^>(Strange::CygnusLoop[3][0]->L, Beta[0]->L[0]->L, Beta[0]->L);
					if (Oberon == nullptr) Oberon = gcnew Edge<Aluminium^, Up^, Charm^>(Beta, Bottom::VanAllenBelt->R, Bottom::VanAllenBelt->I);
					if (Umbriel == nullptr) Umbriel = gcnew Edge<Charm^, Tauon^, Bottom^>(Bottom::VanAllenBelt->I, this, Beta[0]->L);
					if (Ariel == nullptr) Ariel = gcnew Edge<Bottom^, Tauon^, Top^>(Beta[0]->L, this, Bottom::VanAllenBelt->R[0]->L);
				}

				void Add(Top^ Beta, Aluminium^ Rho) {
					Enceladus->Add(Beta, this);
					this->Dai<Top^, Aluminium^>::Add(Beta, Rho);
				}
			};
		}
	}
}