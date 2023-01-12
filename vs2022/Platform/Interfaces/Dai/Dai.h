#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Numerics;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			generic <typename T1, typename T2>
			where T1 : Epsilon
			where T2 : Epsilon
			public ref class Dai : public Epsilon
			{
			typedef KeyValuePair<T1, T2> Chi;
			private:
				List<Chi>^ Alpha;
			public:
				Dai() {
					Alpha = gcnew List<Chi>();
				}

				void Add(T1 A, T2 B) { 
					Alpha->Add(Chi(A, B));
					if (A->Epsilon.IsZero || B->Epsilon.IsZero) throw gcnew Exception("Zero Epsilon");
					this->Epsilon = BigInteger::Add(this->Epsilon, BigInteger::Add(A->Epsilon, B->Epsilon)); 
				}
				void Add(Chi M) {
					Alpha->Add(M); 
					if (M.Key->Epsilon.IsZero || M.Value->Epsilon.IsZero) throw gcnew Exception("Zero Epsilon");
					this->Epsilon = BigInteger::Add(this->Epsilon, BigInteger::Add(M.Key->Epsilon, M.Value->Epsilon)); 
				}
				void Remove(T1 A, T2 B) {
					Alpha->Remove(Chi(A, B));
				}
				void Remove(Chi M) {
					Alpha->Remove(M);
				}

				property int Count { int get() { return Alpha->Count; }}
				property Chi default[int] { Chi get(int i) { return Alpha[i]; } }
				property Chi Mu { Chi get() { return Alpha[0]; } }
				property Chi Rho { Chi get() { return Alpha[1]; } }
				property Chi Psi { Chi get() { return Alpha[2]; } }
				property Chi Nu { Chi get() { return Alpha[3]; } }
				property Chi Eta { Chi get() { return Alpha[4]; } }
				property Chi Sigma { Chi get() { return Alpha[5]; } }
				property Chi Upsilon { Chi get() { return Alpha[6]; } }
				property Chi Tau { Chi get() { return Alpha[7]; } }
				property Chi Theta { Chi get() { return Alpha[8]; } }
				property Chi Last { Chi get() { return Alpha[Alpha->Count - 1]; } }
			};
		}
	}
}
