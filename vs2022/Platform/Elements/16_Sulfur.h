#pragma once
#include "13_Aluminium.h"
#include "14_Silicon.h"
#include "15_Phosphorous.h"

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Sulfur : public Quark<Aluminium^, Phosphorous^, Silicon^>
			{
			public:
				static Dai<Phosphorous^, Sulfur^>^ Telesto;

				Sulfur(Aluminium^ Phi, Phosphorous^ Rho, Silicon^ Upsilon) : Quark<Aluminium^, Phosphorous^, Silicon^>(Phi, Rho, Upsilon) {
					if(Telesto == nullptr) Telesto = gcnew Dai<Phosphorous^, Sulfur^>();
					Phosphorous^ Eta = gcnew Phosphorous(
						Phi,
						Rho->Epsilon,
						Upsilon->Epsilon,
						Phi->Epsilon,
						Upsilon->Zeta->N->Last.Value->Epsilon);
					Telesto->Add(Eta, this);
				}
			};
		}
	}
}