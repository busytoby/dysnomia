#include "pch.h"

#include "Wou.h"

#include <assert.h>
using namespace System::Drawing;
using namespace Dysnomia::Platform::Wou;
using namespace Dysnomia::Platform::Elements;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;

				Down^ Mu = gcnew Down();
				Charm^ Rho = gcnew Charm(Mu);
				Up^ Psi = gcnew Up(Rho);

				Down^ Nu = gcnew Down();
				Charm^ Eta = gcnew Charm(Nu);

				Bottom^ Sigma = gcnew Bottom(Psi, Eta);
				Aluminium^ Upsilon = gcnew Aluminium(Sigma);

				/*
				Mu = gcnew Carbon();
				Rho = gcnew Fluorine(Mu);
				Psi = gcnew Natrium(Rho);
				Constants::Evidences->Add(Psi->Mu.Key->Evidence());
				Constants::Evidences->Add(Laws::Third);

				Nu = gcnew Carbon();
				Eta = gcnew Fluorine(Nu);
				Constants::Evidences->Add(Constants::Upsilon);
				Constants::Evidences->Add(Laws::Sixth);
				Constants::Evidences->Add(Laws::Eighth);

				Sigma = gcnew Magnesium(Psi, Eta);
				Upsilon = gcnew Aluminium(Sigma);
				Constants::Evidences->Add(Upsilon->Evidence());
				Constants::Evidences->Add(Laws::Tenth);
				*/
			}
		}
	}
}