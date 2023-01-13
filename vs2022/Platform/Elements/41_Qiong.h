#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Qiong : public Quark<Elements::Quaternion^, Blong^, Qiao^>
			{
			public:
				Qiong(Elements::Quaternion^ Rho, Blong^ Qi, Qiao^ Xi) : Quark(Rho, Qi, Xi) { };
			};
		}
	}
}