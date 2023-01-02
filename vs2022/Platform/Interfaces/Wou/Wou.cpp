#include "pch.h"

#include "Wou.h"
#include <assert.h>
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			Wou::Wou() {
				Dysnomia::Math::Prime = Dysnomia::Math::MotzkinPrime;
				Hydrogen^ Hi = gcnew Hydrogen();

				Beryllium^ Xi = gcnew Beryllium();			
				BigInteger ProofOfTemperature = Xi->RunXi();
				assert(!ProofOfTemperature.IsZero);
				assert(ProofOfTemperature.Equals(Xi->Epsilon));

				Boron^ Qi = gcnew Boron(Hi, Xi->Cone, Xi->Rod);
			}
		}
	}
}