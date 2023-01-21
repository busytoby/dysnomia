#pragma once

using namespace System;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Argon : public Edge<Sulfur^, Chlorine^, Gluon^>
			{
			public:
				static Edge<Sulfur^, Gluon^, Bottom^>^ Telesto;
				static Edge<Sulfur^, Bottom^, Chlorine^>^ Ferdinand;
				static Dai<Tauon^, Gluon^>^ FranciscoProliferation;

				Argon(Chlorine^ Beta) : Edge<Sulfur^, Chlorine^, Gluon^>(Beta[0]->L[0]->I, Beta, Beta[0]->L) {
					if (Telesto == nullptr) Telesto = gcnew Edge<Sulfur^, Gluon^, Bottom^>(Beta[0]->L[0]->I, Beta[0]->L, Beta[0]->I[0]->L[0]->L);
					if (Ferdinand == nullptr) Ferdinand = gcnew Edge<Sulfur^, Bottom^, Chlorine^>(Beta[0]->L[0]->I, Beta[0]->I[0]->L[0]->L, Beta);
					if (Beta[0]->L->Count > 1 && FranciscoProliferation == nullptr) FranciscoProliferation = gcnew Dai<Tauon^, Gluon^>();
					if (Beta[0]->L->Count > 1 && FranciscoProliferation != nullptr)
						for (int i = 0; i < Beta[0]->L->Count; i++)
							FranciscoProliferation->Add(Beta[0]->L[i]->L, Beta[0]->L);
				}
			};
		}
	}
}