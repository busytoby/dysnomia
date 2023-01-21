#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Coronium : public Edge<Magnesium^, Nitrogen^, Fluorine^>
			{
			public:
				static Edge<Magnesium^, Nitrogen^, Fluorine^>^ Halimede;
				static Edge<Nitrogen^, Fluorine^, Magnesium^>^ Naiad;
				Coronium(Magnesium^ Mu, Nitrogen^ Rho, Fluorine^ Psi) : Edge(Mu, Rho, Psi) { 
					if (Halimede == nullptr) Halimede = this;
					if (Naiad == nullptr) Naiad = gcnew Edge<Nitrogen^, Fluorine^, Magnesium^>(R, L, N);
				}
			};
		}
	}
}