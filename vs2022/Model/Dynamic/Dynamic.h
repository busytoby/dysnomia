#pragma once
/*
Ordered Pairs:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn;
*/

using namespace System;
using namespace System::Numerics;
using namespace System::Collections::Generic;
using namespace System::Reflection;

namespace Dysnomia {
	public ref class DynamicException : public Exception {
	public:
		int Code;
		String^ Description;

		DynamicException(int C, String^ D) : Exception(D) {
			Code = C;
			Description = D;
		}
	};

	public ref class Epsilon {
	public:
		virtual property Double Mass { Double get() { return 0.0; }};
		BigInteger Epsilon;

		void FindKeys(List<Dysnomia::Epsilon^>^ R, String^ _Type) {
			for each (FieldInfo^ F in this->GetType()->GetFields(BindingFlags::Instance | BindingFlags::Public | BindingFlags::NonPublic)) {
				if (F->FieldType->Name == "BigInteger" || F->FieldType->Name == "Color") continue;
				Object^ V = F->GetValue(this);
				if (V == nullptr)
					continue;
				if (F->FieldType->Name == _Type) {
					//R->Add((Dysnomia::Epsilon^)V);
				}
				else if(F->Name == "N")
					((Dysnomia::Epsilon^)V)->FindKeys(R, _Type);
			}
			if (this->GetType()->BaseType->Name->StartsWith("Dai")) {
				FieldInfo^ F = this->GetType()->BaseType->GetField("Alpha", System::Reflection::BindingFlags::Instance | System::Reflection::BindingFlags::NonPublic);
				Object^ V = F->GetValue(this);

				System::Collections::IEnumerator^ E = ((System::Collections::IEnumerable^)V)->GetEnumerator();
				while (E->MoveNext()) {
					Dysnomia::Epsilon^ Key = (Dysnomia::Epsilon^)E->Current->GetType()->GetProperty("Key")->GetValue(E->Current);
					if (Key->GetType()->Name == _Type) 
						R->Add(Key);
					else 
						Key->FindKeys(R, _Type);
					Dysnomia::Epsilon^ Value = (Dysnomia::Epsilon^)E->Current->GetType()->GetProperty("Value")->GetValue(E->Current);
					if (Value->GetType()->Name == _Type) {
						//R->Add(Value);
						throw gcnew Exception("Invalidate Search");
					} 
					else
						Value->FindKeys(R, _Type);
				}
			}
		}
	};

	public ref class Mu : Epsilon {
	public:
		Double Epsilon;

		Mu::Mu(Double Y) { this->Epsilon = Y; }
		void Mu::Rho() { this->Epsilon = this->Epsilon / 3.141592; }
	};

	public ref class Tau : Epsilon {
	public:
		Tau::Tau(BigInteger X) { this->Epsilon = X; }
	};

	public ref class Dynamic : Epsilon
	{
	private:
		void Initialize();
		void Seed();

	public:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn, Coordinate;
		BigInteger Tau, Mu, Eta, Nu, Rho, Alpha;

		Dynamic();
		Dynamic(const Dynamic%);
		void Tune();
		void Fuse(BigInteger, BigInteger, BigInteger);
		BigInteger Avail(BigInteger);
		void Form(BigInteger);
		void Polarize();
		void Conjugate(BigInteger%);
		void Conify();
		BigInteger Saturate(BigInteger, BigInteger);
		void Bond();
		void Adduct(BigInteger);
		void Open();
		bool ManifoldCompare(Dynamic^);
		BigInteger Charge(BigInteger, bool);
		BigInteger Induce(BigInteger, bool);
		BigInteger Torque(BigInteger, bool);
		BigInteger Amplify(BigInteger, bool);
		BigInteger Sustain(BigInteger, bool);
		void React(BigInteger, BigInteger);
	};
}
