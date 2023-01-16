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
			public ref class Chi {
			public:
				virtual property Double Mass { Double get() override { return I->Mass - L->Mass; }};
				T1 I;
				T2 L;

				Chi(T1 Lambda, T2 Xi) {
					I = Lambda;
					L = Xi;
				}

				Chi(KeyValuePair<T1, T2> Beta) {
					I = Beta.Key;
					L = Beta.Value;
				}
			};

			generic <typename T1, typename T2>
			where T1 : Epsilon
			where T2 : Epsilon
			public ref class Dai : public Epsilon
			{
			public:
				List<Chi<T1, T2>^>^ Alpha;
				virtual property Double Mass { Double get() override { Double _Mass = 0; for (int i = 0; i < Count; i++) { _Mass += this[i]->I->Mass; } return _Mass; }};
				Dai() {
					Alpha = gcnew List<Chi<T1, T2>^>();
				}

				void Add(T1 A, T2 B) { 
					Alpha->Add(gcnew Chi<T1, T2>(A, B));
					if (A->Epsilon.IsZero || B->Epsilon.IsZero) throw gcnew Exception("Zero Epsilon");
					this->Epsilon = BigInteger::Add(this->Epsilon, BigInteger::Add(A->Epsilon, B->Epsilon)); 
				}
				void Remove(Chi<T1, T2>^ M) {
					Alpha->Remove(M);
				}

				property int Count { int get() { return Alpha->Count; }}
				property Chi<T1, T2>^ default[int] { Chi<T1, T2>^ get(int i) { return Alpha[i]; }}
				property Chi<T1, T2>^ Mu { Chi<T1, T2>^ get() { return Alpha[0]; }}
				property Chi<T1, T2>^ Rho { Chi<T1, T2>^ get() { return Alpha[1]; }}
				property Chi<T1, T2>^ Psi { Chi<T1, T2>^ get() { return Alpha[2]; }}
				property Chi<T1, T2>^ Nu { Chi<T1, T2>^ get() { return Alpha[3]; }}
				property Chi<T1, T2>^ Eta { Chi<T1, T2>^ get() { return Alpha[4]; }}
				property Chi<T1, T2>^ Sigma { Chi<T1, T2>^ get() { return Alpha[5]; }}
				property Chi<T1, T2>^ Upsilon { Chi<T1, T2>^ get() { return Alpha[6]; }}
				property Chi<T1, T2>^ Tau { Chi<T1, T2>^ get() { return Alpha[7]; }}
				property Chi<T1, T2>^ Theta { Chi<T1, T2>^ get() { return Alpha[8]; }}
				property Chi<T1, T2>^ Last { Chi<T1, T2>^ get() { return Alpha[Alpha->Count - 1]; }}
			};
		}
	}
}
