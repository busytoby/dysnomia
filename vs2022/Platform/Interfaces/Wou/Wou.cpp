#include "pch.h"

#include "Wou.h"

#include <assert.h>
using namespace System::Numerics;
using namespace System::Drawing;
using namespace Dysnomia::Platform;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;

				Mu = gcnew Carbon();
				Rho = gcnew Fluorine(Mu);
				Psi = gcnew Natrium(Rho);
				Constants::Evidences->Add(Psi->Mu.Key->PresentEvidence());
				Constants::Evidences->Add(Laws::Third);

				Nu = gcnew Carbon();
				Eta = gcnew Fluorine(Nu);
				Objects::Neptune->L->Add(Eta->Mu.Value, Nu->Omicron);
				Objects::Neptune->L->Add((Beryllium^)Nu->Pi->R, Objects::Neptune->L->Omicron);
				Constants::Evidences->Add(Constants::Upsilon);
				Constants::Evidences->Add(Laws::Sixth);
				Constants::Evidences->Add(Laws::Eighth);

				Sigma = gcnew Magnesium(Psi, Eta);
				Upsilon = gcnew Aluminium(Sigma);
				Constants::Evidences->Add(Upsilon->PresentEvidence());
				Constants::Evidences->Add(Laws::Tenth);			
			}
		}
	}
}