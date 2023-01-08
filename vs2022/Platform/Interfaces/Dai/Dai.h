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
			private:
				List<KeyValuePair<T1, T2>>^ Alpha;
			public:
				Dai() {
					Alpha = gcnew List<KeyValuePair<T1, T2>>();
				}

				void Add(T1 A, T2 B) { 
					Alpha->Add(KeyValuePair<T1, T2>(A, B)); 
					if (A->Epsilon.IsZero || B->Epsilon.IsZero) throw gcnew Exception("Zero Epsilon");
					this->Epsilon = BigInteger::Add(this->Epsilon, BigInteger::Add(A->Epsilon, B->Epsilon)); 
				}
				void Add(KeyValuePair<T1, T2> M) { 
					Alpha->Add(M); 
					if (M.Key->Epsilon.IsZero || M.Value->Epsilon.IsZero) throw gcnew Exception("Zero Epsilon");
					this->Epsilon = BigInteger::Add(this->Epsilon, BigInteger::Add(M.Key->Epsilon, M.Value->Epsilon)); 
				}
				void Remove(T1 A, T2 B) {
					Alpha->Remove(KeyValuePair<T1, T2>(A, B));
				}
				void Remove(KeyValuePair<T1, T2> M) {
					Alpha->Remove(M);
				}

				property int Count { int get() { return Alpha->Count; }}
				property KeyValuePair<T1, T2> default[int] { KeyValuePair<T1, T2> get(int i) { return Alpha[i]; } }
				property KeyValuePair<T1, T2> Mu { KeyValuePair<T1, T2> get() { return Alpha[0]; } }
				property KeyValuePair<T1, T2> Rho { KeyValuePair<T1, T2> get() { return Alpha[1]; } }
				property KeyValuePair<T1, T2> Psi { KeyValuePair<T1, T2> get() { return Alpha[2]; } }
				property KeyValuePair<T1, T2> Nu { KeyValuePair<T1, T2> get() { return Alpha[3]; } }
				property KeyValuePair<T1, T2> Eta { KeyValuePair<T1, T2> get() { return Alpha[4]; } }
				property KeyValuePair<T1, T2> Sigma { KeyValuePair<T1, T2> get() { return Alpha[5]; } }
				property KeyValuePair<T1, T2> Upsilon { KeyValuePair<T1, T2> get() { return Alpha[6]; } }
				property KeyValuePair<T1, T2> Tau { KeyValuePair<T1, T2> get() { return Alpha[7]; } }
				property KeyValuePair<T1, T2> Theta { KeyValuePair<T1, T2> get() { return Alpha[8]; } }
				property KeyValuePair<T1, T2> Last { KeyValuePair<T1, T2> get() { return Alpha[Alpha->Count - 1]; } }
			};
		}
	}
}
