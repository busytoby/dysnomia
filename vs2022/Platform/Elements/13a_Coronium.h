#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Coronium : public Quark<Magnesium^, Nitrogen^, Fluorine^>
			{
			public:
				static Quark<Magnesium^, Nitrogen^, Fluorine^>^ Halimede;
				static Quark<Nitrogen^, Fluorine^, Magnesium^>^ Naiad;
				Coronium(Magnesium^ Mu, Nitrogen^ Rho, Fluorine^ Psi) : Quark(Mu, Rho, Psi) { 
					Phosphorous::Jupiter19->Add(this, gcnew Silicon(Psi->Mu.Key, this));
					if (Halimede == nullptr) Halimede = this;
					if (Naiad == nullptr) Naiad = gcnew Quark<Nitrogen^, Fluorine^, Magnesium^>(R, L, N);
				}
			};
		}
	}
}