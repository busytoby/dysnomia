#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Carbon : Poly<Beryllium^, Helium^> {
			public:
				Hydrogen^ Beta;
				Lithium^ Xi;
				Helium^ Omicron;
				Boron^ Pi;

				Carbon() {
					Xi = gcnew Lithium();
					Omicron = gcnew Helium();
					Grow();
				}

				void Grow() {
					Beta = gcnew Hydrogen();
					Beryllium^ Alpha = gcnew Beryllium();
					Affinity^ R = gcnew Affinity(Beta, Alpha->Beta);
					Pi = gcnew Boron(R, Alpha, Alpha->Beta);
					Xi->Zeta(Beta, Pi);

					int C = Omicron->Count;
					Omicron->Zeta(Alpha->Cone, Alpha->Beta);
					for (int i = 0; i < C; i++) {
						Omicron->Zeta(Omicron[i].Value, Alpha->Beta);
					}
					Add(Alpha, Omicron);

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
						Alpha = gcnew Beryllium();
						R = gcnew Affinity(gcnew Hydrogen(), Alpha->Beta);
						Pi = gcnew Boron(R, Alpha, Alpha->Beta);
						Xi->Zeta(R->Rod, Pi);
						Add(Alpha, Omicron);
					}
				}
			};
		}
	}
}
