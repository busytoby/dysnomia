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

				Charm(Down^ Alpha) {
					if (Alpha->Count > 1) throw gcnew Exception("Cannot Charm");
					Affinity^ Beta = gcnew Affinity(
						Alpha[0]->L[0]->I->R->R->Base,
						Alpha[0]->I->L[0]->I->R->Secret,
						Alpha[0]->I->L[1]->I->R->Signal,
						Alpha[0]->L[0]->L[0]->L->Channel);
					Hadron^ Phi = gcnew Hadron(Beta->Rod);
					Phi->L->Epsilon = Beta->Cone->Tau;
					Alpha[0]->I->Chi(Phi, Beta->Cone);

					Alpha[0]->L[0]->L->Add(Phi, Beta->Cone);
					Baryon^ Psi = gcnew Baryon(Alpha, Alpha[0]->I->L, Alpha[0]->L[0]->L);

					Add(Alpha[0]->I, Psi);

					if (Tethys == nullptr) Tethys = gcnew Dai<Lith^, Charm^>();
					Tethys->Add(Alpha[0]->I->L, this);
					if (Neptune == nullptr) Neptune = gcnew Quark<Charm^, Nucleon^, Down^>(this, Alpha[0]->L, Alpha);
					if (Laodemeia == nullptr) Laodemeia = gcnew Quark<Nucleon^, Charm^, Down^>(Alpha[0]->L, this, Alpha);
				}
			};
		}
	}
}
