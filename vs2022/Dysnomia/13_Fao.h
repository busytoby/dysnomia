#pragma once
#include "08b_Tsong.h"
#include "12_Tsuan.h"

using namespace std;

namespace Dysnomia {
	class Fao {
	public:
		Tsuan* Mu;
		Tung* Rho;
		Xiao* Psi;
		Qiao* Nu;
		Eun* Eta;
		Iron* Sigma;
		Qiao* Upsilon;
		Tin* Tau;
		int Gamma = 1;

		~Fao() {
			if (Tau->Gamma == 1) delete Tau; else Tau->Gamma--;
			if (Upsilon->Gamma == 1) delete Upsilon; else Upsilon->Gamma--;
			if (Sigma->Gamma == 1) delete Sigma; else Sigma->Gamma--;
			if (Eta->Gamma == 1) delete Eta; else Eta->Gamma--;
			if (Nu->Gamma == 1) delete Nu; else Nu->Gamma--;
			if (Psi->Gamma == 1) delete Psi; else Psi->Gamma--;
			if (Rho->Gamma == 1) delete Rho; else Rho->Gamma--;
			if (Mu->Gamma == 1) delete Mu; else Mu->Gamma--;
		}
		
		Fao(Life* Alpha) {
			Alpha->Gamma++;
			Mu = new Tsuan(Alpha);
			Rho = new Tung(Mu->Mu->Mu);
			Psi = new Xiao(Rho);
			Nu = new Qiao(Psi->Theta, Psi->Theta->Beta(), Psi->Theta->Omicron(), Mu->Rho->Sigma);
			pair<Eun*, Iron*> Three = Psi->Pi();
			Eta = Three.first;
			Sigma = Three.second;
			Upsilon = new Qiao(Sigma, Eta->Upsilon, Mu->Sigma->Upsilon, Mu->Rho->Sigma);
			Tau = new Tin(Upsilon->Upsilon);
		}

		Tsong* Pi() {
			return new Tsong(Psi->Rho);
		}
	};
}