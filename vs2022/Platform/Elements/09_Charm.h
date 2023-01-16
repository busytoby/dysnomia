#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;
using Dysnomia::Math;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Charm : public Metal<Baryon^>
			{
			public:
				static Quark<Charm^, Nucleon^, Down^>^ Neptune;
				static Dai<Lith^, Charm^>^ Tethys;
				static Quark<Nucleon^, Charm^, Down^>^ Laodemeia;

				Charm(Down^ Beta) {
					if (Beta->Count > 1) throw gcnew Exception("Cannot Charm");
					Baryon^ Psi = gcnew Baryon(Beta, Beta[0]->I->R, Beta[0]->L[0]->L);
					Double M = Psi->Mass;
					Add(Beta[0]->I, Psi);

					if (Tethys == nullptr) Tethys = gcnew Dai<Lith^, Charm^>();
					Tethys->Add(Beta[0]->I->R, this);
					if (Neptune == nullptr) Neptune = gcnew Quark<Charm^, Nucleon^, Down^>(this, Beta[0]->L, Beta);
					if (Laodemeia == nullptr) Laodemeia = gcnew Quark<Nucleon^, Charm^, Down^>(Beta[0]->L, this, Beta);
				}
			};
		}
	}
}
