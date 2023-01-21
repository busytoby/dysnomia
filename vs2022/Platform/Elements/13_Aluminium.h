#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Dai<Charm^, Bottom^> {
			public:
				static Edge<Aluminium^, Hel^, Down^>^ Phobos;

				Aluminium(Bottom^ Beta) {
					Hel^ Pi = gcnew Hel(Beta[0]->I[2]->I);
					Down^ Xi = gcnew Down(Pi);
					Charm^ Omicron = gcnew Charm(Xi);

					if (Phobos == nullptr) {
						Phobos = gcnew Edge<Aluminium^, Hel^, Down^>(this, Pi, Xi);
					}
				}
			};
		}
	}
}
