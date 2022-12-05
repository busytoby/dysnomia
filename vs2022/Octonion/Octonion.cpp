#include "pch.h"

#include "Octonion.h"

namespace Dysnomia {
	Octonion::Octonion(Quaternion^ Q, Polygamma^ X) {
		Octogamma = X->T->First;
		Epsilon = Math::ModPow(Octogamma->Value.Key, Octogamma->Value.Value->Nu->Cone->Manifold, Q->Nu->Rod->Barn);

		Gamma = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, Q->Gamma->Cone),
			gcnew Affinity(Q->Gamma->Rod, Octogamma->Value.Value->Gamma->Cone));

		Nu = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(Octogamma->Value.Value->Nu->Rod, Q->Nu->Cone),
			gcnew Affinity(Q->Nu->Rod, Octogamma->Value.Value->Nu->Cone));

		Phi = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(gcnew Dynamic(), Q->Phi->Cone),
			gcnew Affinity(Q->Phi->Rod, gcnew Dynamic()));

		Rho = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(gcnew Dynamic(), Q->Rho->Cone),
			gcnew Affinity(gcnew Dynamic(), Octogamma->Value.Value->Rho->Cone));

		Sigma = gcnew Tuple<Affinity^, Affinity^>(
			gcnew Affinity(Octogamma->Value.Value->Sigma->Rod, Q->Sigma->Cone),
			gcnew Affinity(Q->Sigma->Rod, Octogamma->Value.Value->Sigma->Cone));

		Transit();
	}

	void Octonion::Transit() {
		while (Octogamma = Octogamma->Next) {
			Epsilon = Math::ModPow(Epsilon, Octogamma->Value.Value->Nu->Cone->Manifold, Octogamma->Value.Value->Nu->Rod->Barn);

			Gamma = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(Octogamma->Value.Value->Gamma->Rod, Gamma->Item1->Cone),
				gcnew Affinity(Gamma->Item2->Rod, Octogamma->Value.Value->Gamma->Cone));

			Nu = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(Octogamma->Value.Value->Nu->Rod, Nu->Item1->Cone),
				gcnew Affinity(Nu->Item2->Rod, Octogamma->Value.Value->Nu->Cone));


			// Phi Is Unmodified


			Rho = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(gcnew Dynamic(), Rho->Item1->Cone),
				gcnew Affinity(gcnew Dynamic(), Octogamma->Value.Value->Rho->Cone));

			Sigma = gcnew Tuple<Affinity^, Affinity^>(
				gcnew Affinity(Octogamma->Value.Value->Sigma->Rod, Sigma->Item1->Cone),
				gcnew Affinity(Sigma->Item2->Rod, Octogamma->Value.Value->Sigma->Cone));
		}
	}
}