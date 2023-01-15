#pragma once

using namespace System;
using Dysnomia::Epsilon;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hadron : public Quark<Mu^, Dynamic^, Tau^> {
			public:
				Hadron() : Quark<Mu^, Dynamic^, Tau^>(gcnew Mu(Math::Mu), gcnew Dynamic(), gcnew Tau(0)) {
					this->Epsilon = I->Epsilon;
				};
				Hadron(Dynamic^ Beta) : Quark<Mu^, Dynamic^, Tau^>(gcnew Mu(Math::Mu), Beta, gcnew Tau(0)) {
					this->Epsilon = I->Epsilon;
				};
				void Phi(Hadron^ Beta) {
					if (!Beta->I->Barn.IsZero || !I->Barn.IsZero) throw gcnew Exception("Already Paired");
					Affinity^ Pi = gcnew Affinity(Beta->I, I);
					R->Epsilon = Pi->Cone->Tau;
					Beta->R->Epsilon = Pi->Cone->Tau;
				}
			};
		}
	}
}