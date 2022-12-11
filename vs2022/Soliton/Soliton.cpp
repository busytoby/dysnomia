#include "pch.h"

#include "Soliton.h"

namespace Dysnomia {
	Soliton::Soliton(Quaternion^ Rho, Quaternion^ Nu) {
		if (Sigma == nullptr) Sigma = Rho;

		Polygamma^ Xi = gcnew Polygamma(Rho);
		Mu = gcnew Spinor(Nu, Xi);
		Xi->Add(Sigma);
		Xi->Add(Nu);
		Xi->Add(Rho);

		Shift<Octonion^>^ t = gcnew Shift<Octonion^>(T);

	}
}