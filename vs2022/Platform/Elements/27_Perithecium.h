#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Perithecium : public Edge<Eun^, Versor^, Ramus^> {
			public:
				static Dai<Eun^, Ascus^>^ Larissa;
				static Dai<Versor^, Ramus^>^ Amalthea;

				Perithecium(Ramus^ Beta) : Edge(Beta[0]->I[0]->I, Beta[0]->L, Beta) {
					if (Larissa == nullptr) Larissa = gcnew Dai<Eun^, Ascus^>();
					if (Amalthea == nullptr) Amalthea = gcnew Dai<Versor^, Ramus^>();
					Larissa->Add(Beta[0]->I[0]->I, Beta[0]->I[0]->L);
					Amalthea->Add(Beta[0]->L, Beta);
				}
			};
		}
	}
}
