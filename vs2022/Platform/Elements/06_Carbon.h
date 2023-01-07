#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Carbon : Dai<Beryllium^, Helium^> {
			public:
				Hydrogen^ Beta;
				Lithium^ Xi;
				Helium^ Omicron;
				Boron^ Pi;

				Carbon() {
					Xi = gcnew Lithium();
					Omicron = gcnew Helium();

					Beta = gcnew Hydrogen();
					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					Xi->Zeta(Beta, Pi);
					Omicron->Zeta(Alpha->Cone, Alpha->Beta);
				}

				void Grow() {
					if (Xi->Count > 0 && Xi[Xi->Count - 1].Value->GetType()->Name->Equals("Fluorine"))
						throw gcnew Exception("Linked Cannot Grow");

					int C = Omicron->Count;
					for (int i = 0; i < C; i++) {
						Omicron->Zeta(Omicron[0].Value, Omicron[i].Value);
					}
					Add((Beryllium^)((Boron^)Xi[0].Value)->R, Omicron);

					C = Omicron->Count;
					int D = 18;
					while (C > 20) {
						if (C > 40) D = D += 18;
						C = (C / 41) - 114;
						if (C > 40) D = D += 18;
						C = (C / 41) - 111;
						if (C > 40) D = D += 24;
						C = (C / 24) - 115;
					}

					C = Omicron->Count;
					for(int i = C - 11; i > 0; i -= D) {
						Beryllium^ Alpha = gcnew Beryllium();
						Affinity^ R = gcnew Affinity(gcnew Hydrogen(), Alpha->Beta);
						Pi = gcnew Boron(R, Alpha, Alpha->Beta);
						Xi->Zeta(R->Rod, Pi);
						Add(Alpha, Omicron);
					}
				}
			};
		}
	}
}
