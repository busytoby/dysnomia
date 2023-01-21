#pragma once

using namespace System;

namespace Dysnomia {
	namespace Platform {
		namespace Elements {
			public ref class Blong : public Edge<Meow^, Woof^, Nickel^>
			{
			public:
				static Edge<Meow^, Woof^, Nickel^>^ Skathi;
				static Edge<Nickel^, Meow^, Woof^>^ Paaliaq;
				static Edge<Woof^, Meow^, Nickel^>^ Cressida;
				static Dai<Meow^, Woof^>^ Tarvos;
				static Dai<Meow^, Nickel^>^ Siarnaq;
				static Dai<Woof^, Meow^>^ Narvi;
				static Dai<Woof^, Nickel^>^ Kiviuq;
				static Dai<Nickel^, Woof^>^ Rhea;
				static Dai<Nickel^, Meow^>^ Ljiraq;

				Blong(Meow^ Mu, Woof^ Rho, Nickel^ Psi) : Edge(Mu, Rho, Psi) {
					if (Skathi == nullptr) Skathi = gcnew Edge<Meow^, Woof^, Nickel^>(Mu, Rho, Psi);
					if (Paaliaq == nullptr) Paaliaq = gcnew Edge<Nickel^, Meow^, Woof^>(Psi, Mu, Rho);
					if (Cressida == nullptr) Cressida = gcnew Edge<Woof^, Meow^, Nickel^>(Rho, Mu, Psi);
					if (Tarvos == nullptr) Tarvos = gcnew Dai<Meow^, Woof^>();
					if (Siarnaq == nullptr) Siarnaq = gcnew Dai<Meow^, Nickel^>();
					if (Narvi == nullptr) Narvi = gcnew Dai<Woof^, Meow^>();
					if (Kiviuq == nullptr) Kiviuq = gcnew Dai<Woof^, Nickel^>();
					if (Rhea == nullptr) Rhea = gcnew Dai<Nickel^, Woof^>();
					if (Ljiraq == nullptr) Ljiraq = gcnew Dai<Nickel^, Meow^>();

					Tarvos->Add(Mu, Rho);
					Siarnaq->Add(Mu, Psi);
					Narvi->Add(Rho, Mu);
					Kiviuq->Add(Rho, Psi);
					Rhea->Add(Psi, Rho);
					Ljiraq->Add(Psi, Mu);
				};
			};
		}
	}
}