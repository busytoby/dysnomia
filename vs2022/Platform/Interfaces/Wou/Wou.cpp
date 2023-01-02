#include "pch.h"

#include "Wou.h"
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;
				Xi = gcnew Beryllium();
				BigInteger ProofOfTemperature = Xi->RunXi();
				Alpha();		
			}

			void Wou::Alpha() {

			}
		}
	}
}