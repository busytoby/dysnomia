#pragma once

using namespace System;
using Dysnomia::Epsilon;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hadron : public Quark<Mu^, Dynamic^, Tau^> {
			private:
				Double _Mass;
			public:
				virtual property Double Mass { Double get() override { return _Mass; }};

				Hadron() : Quark<Mu^, Dynamic^, Tau^>(gcnew Mu(Math::Mu), gcnew Dynamic(), gcnew Tau(0)) {
					this->Epsilon = I->Epsilon;
					_Mass = 0.5;
				};
				Hadron(Dynamic^ Beta) : Quark<Mu^, Dynamic^, Tau^>(gcnew Mu(Math::Mu), Beta, gcnew Tau(0)) {
					this->Epsilon = I->Epsilon;
					_Mass = 0.5;
				};
				void Phi(Hadron^ Beta) {
					if (!Beta->I->Barn.IsZero || !I->Barn.IsZero) throw gcnew Exception("Already Paired");
					Affinity^ Pi = gcnew Affinity(Beta->I, I);
					R->Epsilon = Pi->Cone->Tau;
					Beta->R->Epsilon = Pi->Cone->Tau;
					_Mass += 0.5;
					if (Mass != 1) throw gcnew Exception("Mass Failure");
				}
			};
		}
	}
}