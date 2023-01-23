#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Aluminium : public Dai<Charm^, Bottom^> {
			public:
				static Edge<Aluminium^, Bottom^, Down^>^ Phobos;

				Aluminium() {
					Down^ Beta = gcnew Down();
					Charm^ Pi = gcnew Charm(Beta);
					Up^ Xi = gcnew Up(Pi);

					Down^ Omicron = gcnew Down();
					Charm^ Delta = gcnew Charm(Omicron);

					Bottom^ Alpha = gcnew Bottom(Xi, Delta);

					this->Aluminium::Aluminium(Alpha);
				}

				Aluminium(Bottom^ Beta) {
					Hel^ Pi = gcnew Hel(Beta[0]->I[2]->I);
					Down^ Xi = gcnew Down(Pi);
					Charm^ Omicron = gcnew Charm(Xi);

					Add(Omicron, Beta);

					if (Phobos == nullptr) {
						Phobos = gcnew Edge<Aluminium^, Bottom^, Down^>(this, Beta, Xi);
					}
				}
			};
		}
	}
}
