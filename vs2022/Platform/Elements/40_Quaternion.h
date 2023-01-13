#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Quaternion : public Dai<Woof^, Yttrium^>
			{
			public:
				static Quark<Arsenic^, Woof^, Yttrium^>^ Bianca;
				static Dai<Yttrium^, Woof^>^ Fornjot;

				Quaternion(Yttrium^ Nu) {
					Add(Nu->N->R, Nu);
					for (int i = 0; i < Nu->L->Count; i++)
						Add(Nu->L[i].Key, Nu);
					for (int i = 0; i < Nu->R->Count; i++) {
						Add(Nu->R[i].Key, Nu);
						Add(Nu->R[i].Value->R, Nu);
					}
					if (Count > 4) throw gcnew Exception("Quaternions With Count > 4 Are Not Expected Yet");

					if (Bianca == nullptr) Bianca = gcnew Quark<Arsenic^, Woof^, Yttrium^>(Nu->L->Alpha, Nu->N->R, Nu);
					if (Fornjot == nullptr) Fornjot = gcnew Dai<Yttrium^, Woof^>();
					for (int i = Count - 1; i > -1; i--) Fornjot->Add(this[i].Value, this[i].Key);
				}
			};
		}
	}
}