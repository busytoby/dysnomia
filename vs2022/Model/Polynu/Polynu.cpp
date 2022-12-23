#include "pch.h"

#include "Polynu.h"

namespace Dysnomia {
	Polynu::Polynu() {
		Rho = gcnew LinkedList<Spinor^>();
		Phi = gcnew Spin<Spinor^>();
	}

	void Polynu::Alpha(Spinor^ Xi) {
		if (Rho->Count >= 5 && Phi == nullptr) throw gcnew Exception("Bad Ovum");
		Rho->AddLast(Xi);
		if (Rho->Count == 25) {
			Delta(Chi());
			Delta(Chi());
			Delta(Chi());
			Delta(Chi());
			Delta(Chi());
		}
	}

	void Polynu::Eta() {
		if (Rho->Count != 5) throw gcnew Exception("Bad Ovule");

		Phi->Gamma = Rho->First->Value; Rho->RemoveFirst();
		Phi->Sigma = Rho->First->Value; Rho->RemoveFirst();
		Phi->Nu = Rho->First->Value; Rho->RemoveFirst();
		Phi->Rho = Rho->First->Value; Rho->RemoveFirst();
		Phi->Phi = Rho->First->Value; Rho->RemoveFirst();
	}

	void Polynu::Delta(Spin<Spinor^>^ Qi) {
		Nu->AddLast(KeyValuePair<Spin<Spinor^>^, Spin<Spinor^>^>(Phi, Qi));
	}

	Spin<Spinor^>^ Polynu::Chi() {
		Spin<Spinor^>^ Chi = gcnew Spin<Spinor^>();
		Chi->Gamma = Rho->First->Value; Rho->RemoveFirst();
		Chi->Sigma = Rho->First->Value; Rho->RemoveFirst();
		Chi->Nu = Rho->First->Value; Rho->RemoveFirst();
		Chi->Rho = Rho->First->Value; Rho->RemoveFirst();
		Chi->Phi = Rho->First->Value; Rho->RemoveFirst();
		return Chi;
	}
}