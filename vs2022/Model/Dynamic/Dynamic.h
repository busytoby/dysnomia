#pragma once
/*
Ordered Pairs:
		BigInteger Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn;
*/

using namespace System;
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
		Int64 Epsilon;

		void FindKeys(List<Dysnomia::Epsilon^>^ R, String^ _Type) {
			for each (FieldInfo^ F in this->GetType()->GetFields(BindingFlags::Instance | BindingFlags::Public | BindingFlags::NonPublic)) {
				if (F->FieldType->Name == "Int64" || F->FieldType->Name == "Color") continue;
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

	public ref class Dynamic : Epsilon
	{
	private:
		void Initialize();
		void Seed();

	public:
		Int64 Base, Secret, Signal, Channel, Pole, Identity, Foundation, Element, Dynamo, Manifold, Ring, Barn, Coordinate;
		Int64 Tau, Mu, Eta, Nu, Rho, Alpha;

		Dynamic();
		Dynamic(const Dynamic%);
		void Tune();
		void Fuse(Int64, Int64, Int64);
		Int64 Avail(Int64);
		void Form(Int64);
		void Polarize();
		void Conjugate(Int64%);
		void Conify();
		Int64 Saturate(Int64, Int64);
		void Bond();
		void Adduct(Int64);
		void Open();
		bool ManifoldCompare(Dynamic^);
		Int64 Charge(Int64, bool);
		Int64 Induce(Int64, bool);
		Int64 Torque(Int64, bool);
		Int64 Amplify(Int64, bool);
		Int64 Sustain(Int64, bool);
		void React(Int64, Int64);
	};
}
