#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace Dysnomia {
	namespace Platform {
		namespace Interfaces {
			generic <typename T1, typename T2>
			where T1 : Epsilon
			where T2 : Epsilon
			public ref class Poly : public Epsilon
			{
			private:
				List<KeyValuePair<T1, T2>>^ Alpha;
			public:
				Poly() {
					Alpha = gcnew List<KeyValuePair<T1, T2>>();
				}

				void Add(T1 A, T2 B) { Alpha->Add(KeyValuePair<T1, T2>(A, B)); }
				void Add(KeyValuePair<T1, T2> M) { Alpha->Add(M); }

				property Nullable<KeyValuePair<T1, T2>>^ Mu { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 1) ? Alpha[0] : Nullable<KeyValuePair<T1, T2>>(); } }
				property Nullable<KeyValuePair<T1, T2>>^ Rho { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 2) ? Alpha[1] : Nullable<KeyValuePair<T1, T2>>(); } }
				property Nullable<KeyValuePair<T1, T2>>^ Psi { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 3) ? Alpha[2] : Nullable<KeyValuePair<T1, T2>>(); } }
				property Nullable<KeyValuePair<T1, T2>>^ Nu { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 4) ? Alpha[3] : Nullable<KeyValuePair<T1, T2>>(); } }
				property Nullable<KeyValuePair<T1, T2>>^ Eta { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 5) ? Alpha[4] : Nullable<KeyValuePair<T1, T2>>(); } }
				property Nullable<KeyValuePair<T1, T2>>^ Sigma { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 6) ? Alpha[5] : Nullable<KeyValuePair<T1, T2>>(); } }
				property Nullable<KeyValuePair<T1, T2>>^ Upsilon { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 7) ? Alpha[6] : Nullable<KeyValuePair<T1, T2>>(); } }
				property Nullable<KeyValuePair<T1, T2>>^ Tau { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 8) ? Alpha[7] : Nullable<KeyValuePair<T1, T2>>(); } }
				property Nullable<KeyValuePair<T1, T2>>^ Theta { Nullable<KeyValuePair<T1, T2>>^ get() { return (Alpha->Count >= 9) ? Alpha[8] : Nullable<KeyValuePair<T1, T2>>(); } }
			};
		}
	}
}
