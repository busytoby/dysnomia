#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Sulfur : public Edge<Aluminium^, Parity^, Compensation^>
			{
			public:
				static Dai<Parity^, Sulfur^>^ Titan;

				Sulfur(Parity^ Beta) : Edge(Beta[0]->I[0]->L, Beta, Beta[0]->L) {
					if (Titan == nullptr) Titan = gcnew Dai<Parity^, Sulfur^>();
					Titan->Add(Beta, this);
				}
			};
		}
	}
}