#pragma once

using namespace Dysnomia::Platform::Interfaces;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hel : public Dai<Hadron^, Dynamic^> {
			public:
				List<Hadron^>^ Xi;

				Hel() {
					Affinity^ Beta = gcnew Affinity();
					Add(gcnew Hadron(Beta->Rod), Beta->Cone);
					Mu->I->R->Epsilon = Beta->Cone->Tau;
					this->Epsilon = Mu->I->Epsilon;
				}

				Hel(Affinity^ Beta) {
					Add(gcnew Hadron(Beta->Rod), Beta->Cone);
					Mu->I->R->Epsilon = Beta->Cone->Tau;
					this->Epsilon = Mu->I->Epsilon;
				}

				void Add(Hadron^ Beta, Dynamic^ Pi) {
					if (Xi == nullptr) Xi = gcnew List<Hadron^>();
					this->Dai<Hadron^, Dynamic^>::Add(Beta, Pi);
					Xi->Add(Beta);
				}

				void Omicron() {
					Xi->Sort(gcnew CompareByRho());
				}

				ref class CompareByRho : Comparer<Hadron^>
				{
				public:
					virtual int Compare(Hadron^ Beta, Hadron^ Pi) override
					{
						return Beta->R->Rho.CompareTo(Pi->R->Rho);
					}
				};
			};
		}
	}
}