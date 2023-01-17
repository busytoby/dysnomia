#pragma once

using namespace System;
using Dysnomia::Epsilon;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hadron : public Dynamic {
			private:
				Double _Mass;
			public:
				static Hadron^ MuB;
				virtual property Double Mass { Double get() override { return _Mass; }};
				Double Mu;

				Hadron() : Dynamic() {
					if (MuB == nullptr) MuB = this;
					Mu = Math::Mu;
					_Mass = 0.5;
				};
				Hadron(Dynamic^ Beta) : Dynamic((Dynamic%)Beta) {
					Mu = Math::Mu;
					_Mass = 0.5;
				};
				void Phi(Hadron^ Beta) {
					if (!Beta->Barn.IsZero || !Barn.IsZero) throw gcnew Exception("Already Paired");
					Affinity^ Pi = gcnew Affinity(Beta, this);
					_Mass += 0.5;
					if (Mass != 1) throw gcnew Exception("Mass Failure");
				}
			};
		}
	}
}