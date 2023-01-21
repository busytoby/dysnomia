#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			generic <typename T1, typename T2>
			where T1 : Epsilon
			where T2 : Epsilon
			public ref class Qi {
			public:
				virtual property Double Mass { Double get() { return I->Mass - L->Mass; }};
				T1 I;
				T2 L;

				Qi(T1 Lambda, T2 Xi) {
					I = Lambda;
					L = Xi;
				}

				Qi(KeyValuePair<T1, T2> Beta) {
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
				ref class Chi : public Qi<T1, T2> {
				public:
					Chi(T1 Lambda, T2 Xi) : Qi(Lambda, Xi) {};
				};

				List<Chi^>^ Alpha;
				virtual property Double Mass { Double get() override { Double _Mass = 0; for (int i = 0; i < Count; i++) { _Mass += this[i]->I->Mass; } return _Mass; }};
				Dai() {
					Alpha = gcnew List<Chi^>();
				}

				void Add(T1 A, T2 B) { 
					Alpha->Add(gcnew Chi(A, B));
					if (A->Epsilon == 0 || B->Epsilon == 0) throw gcnew Exception("Zero Epsilon");
					this->Epsilon = this->Epsilon + A->Epsilon + B->Epsilon; 
				}
				void Remove(Chi^ M) {
					Alpha->Remove(M);
				}

				property int Count { int get() { return Alpha->Count; }}
				property Chi^ default[int] { Chi^ get(int i) { return Alpha[i]; }}
				property Chi^ Mu { Chi^ get() { return Alpha[0]; }}
				property Chi^ Rho { Chi^ get() { return Alpha[1]; }}
				property Chi^ Psi { Chi^ get() { return Alpha[2]; }}
				property Chi^ Nu { Chi^ get() { return Alpha[3]; }}
				property Chi^ Eta { Chi^ get() { return Alpha[4]; }}
				property Chi^ Sigma { Chi^ get() { return Alpha[5]; }}
				property Chi^ Upsilon { Chi^ get() { return Alpha[6]; }}
				property Chi^ Tau { Chi^ get() { return Alpha[7]; }}
				property Chi^ Theta { Chi^ get() { return Alpha[8]; }}
				property Chi^ Last { Chi^ get() { return Alpha[Alpha->Count - 1]; }}
			};

			generic <typename T1, typename T2, typename T3>
			where T1 : Epsilon
			where T2 : Epsilon
			where T3 : Epsilon
			public ref class Edge : Epsilon {
			public:
				virtual property Double Mass { Double get() override { Double _Mass = N->Mass + I->Mass - R->Mass; return _Mass; }};
				T1 N;
				T2 I;
				T3 R;

				Edge(T1 Y, T2 X, T3 Z)
				{
					N = Y;
					I = X;
					R = Z;

					if (!N->Epsilon == 0)
						this->Epsilon = N->Epsilon;
					else if (!I->Epsilon == 0)
						this->Epsilon = I->Epsilon;
					else if (!R->Epsilon == 0)
						this->Epsilon = R->Epsilon;
					else throw gcnew Exception("Zero Epsilons");
				}
			};
		}
	}
}
