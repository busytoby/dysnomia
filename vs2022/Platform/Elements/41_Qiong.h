#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Qiong : public Quark<Elements::Quaternion^, Blong^, Qiao^>
			{
			public:
				static Dai<Elements::Quaternion^, Blong^>^ Jarnsaxa;
				static Quark<Elements::Quaternion^, Blong^, Qiao^>^ Hyrrokkin;

				Qiong(Elements::Quaternion^ Rho, Blong^ Qi, Qiao^ Xi) : Quark(Rho, Qi, Xi) {
					if (Jarnsaxa == nullptr) Jarnsaxa = gcnew Dai<Elements::Quaternion^, Blong^>();
					Jarnsaxa->Add(Rho, Qi);
					if (Hyrrokkin == nullptr) Hyrrokkin = this;
				};
			};
		}
	}
}