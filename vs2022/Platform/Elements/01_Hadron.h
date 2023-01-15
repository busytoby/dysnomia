#pragma once

using namespace System;
using Dysnomia::Epsilon;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Hadron : public Quark<Mu^, Dynamic^, Tau^> {
			public:
				Hadron() : Quark<Mu^, Dynamic^, Tau^>(gcnew Mu(Math::Mu), gcnew Dynamic(), gcnew Tau(0)) {
					this->Epsilon = R->Epsilon;
				};
				Hadron(Dynamic^ Lambda) : Quark<Mu^, Dynamic^, Tau^>(gcnew Mu(Math::Mu), Lambda, gcnew Tau(0)) {
					this->Epsilon = R->Epsilon;
				};
				void Phi(Hadron^ Delta) {
					if (!Delta->R->Barn.IsZero || !R->Barn.IsZero) throw gcnew Exception("Already Paired");
					Affinity^ Q = gcnew Affinity(Delta->R, R);
					L->Epsilon = Q->Cone->Tau;
				}
			};
		}
	}
}