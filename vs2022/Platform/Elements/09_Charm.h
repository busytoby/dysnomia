#pragma once

using namespace System;
using namespace System::Collections::Generic;
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
				static Quark<Down^, Lith^, Nucleon^>^ Anthe;

				Charm(Down^ Beta) {
					if (Beta->Count > 1) throw gcnew Exception("Cannot Charm");
					Hadron^ Pi = gcnew Hadron();

					Baryon^ Xi = gcnew Baryon(Beta);
					Hyperon^ Omicron = gcnew Hyperon(Pi, Xi[0]->I, Beta[0]->L[0]->L[1]->L[0]->I);
					Xi->Add(Omicron->I, Beta);

					Add(Beta[0]->I, Xi);

					if (Tethys == nullptr) Tethys = gcnew Dai<Lith^, Charm^>();
					Tethys->Add(Beta[0]->I[1]->L, this);

					if (Laodemeia == nullptr) Laodemeia = gcnew Quark<Nucleon^, Charm^, Down^>(Beta[0]->L, this, Beta);
					if (Neptune == nullptr) Neptune = gcnew Quark<Charm^, Nucleon^, Down^>(this, Beta[0]->L, Beta);
					if (Anthe == nullptr) Anthe = gcnew Quark<Down^, Lith^, Nucleon^>(Beta, Beta[0]->I[2]->L, Beta[0]->L);
				}
			};
		}
	}
}
