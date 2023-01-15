#pragma once

using namespace System;
using Dysnomia::Epsilon;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hydrogen : public Quark<Mu^, Dynamic^, Tau^> {
			public:
				Hydrogen() : Quark<Mu^, Dynamic^, Tau^>(gcnew Mu(Math::Mu), gcnew Dynamic(), gcnew Tau(0)) {
					this->Epsilon = R->Epsilon;
				};
				Hydrogen(Dynamic^ Lambda) : Quark<Mu^, Dynamic^, Tau^>(gcnew Mu(Math::Mu), Lambda, gcnew Tau(0)) {
					this->Epsilon = R->Epsilon;
				};
				void Phi(Hydrogen^ Delta) {
					if (!Delta->R->Barn.IsZero || !R->Barn.IsZero) throw gcnew Exception("Already Paired");
					Affinity^ Q = gcnew Affinity(Delta->R, R);
					L->Epsilon = Q->Cone->Tau;
				}
			};
		}
	}
}